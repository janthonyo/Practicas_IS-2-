#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "Profesor.h"
#include "bd.h"

using namespace std;

int main()
{

Profesor c;

system("clear");

int acceso=0;
int opcion;
BD myBD;
int opcionBusqueda=0;


	while(acceso==0)
	{
		cout<<"Acceso al sistema"<<std::endl<<std::endl;
		cout<<"¿Desea registrarse en el sistema o tiene cuenta?"<<std::endl<<std::endl;

		cout<<"\t1. Registrarme en el sistema."<<std::endl;
		cout<<"\t2. Tengo cuenta y quiero acceder."<<std::endl<<std::endl;
		cout<<"Opcion: ";

		cin>>opcion;

		if(opcion==1) 
		{
			system("clear");
			c.register_ayt();
		}

		else if(opcion==2)
		{
			system("clear");			
			while(acceso==0)
			{
				string user, key;

				cout << "Usuario: ";
				cin >> user;

				system("clear");

				cout << "Contraseña: ";
				cin >> key;
				system("clear");

				acceso=c.login(user, key);
			}
		}

		else
		{
			system("clear");
			cout<<"La opcion seleccionada ("<<opcion<<") no existe"<<endl;
			cout<<"Por favor, espere para introducir otra opcion a continuacion"<<endl;
			sleep(4);
			system("clear");
			
		}
	}

	system("clear");

	std::cout<<"Introduzca el nombre de la base de datos a usar."<<std::endl;
	std::cout<<"Si no existe la BD, se creara una con dicho nombre."<<std::endl<<std::endl;

	std::string nombreBd;
	cin>>nombreBd;

	BD d(nombreBd);
	system("clear");

	do 
	{
		cout<<"----------------------------------------"<<endl<<endl;
		cout<<"¿Que desea hacer?\n\n";
		cout<<"\t1. Introducir Alumno\n";
		cout<<"\t2. Modificar Alumno\n";
		cout<<"\t3. Eliminar Alumno\n";	
		cout<<"\t4. Mostrar Alumno\n";	

		if(acceso==1)
		{
			cout<<"\t5. Guardar Base de Datos\n";	//Hecho
			cout<<"\t6. Cargar Base de Datos\n";	
			cout<<"\t7. Guardar Copia de seguridad externa\n";
			cout<<"\t8. Cargar Copia de seguridad externa\n";
		}
		cout<<"\t0. Salir\n\n";
		cout<<"----------------------------------------"<<endl<<endl;

		cout<<"Opcion: ";
		cin>>opcion;


		switch(opcion)
		{
			case 1:
			// COMPRUEBA NºALUMNOS < 150 ···
								if(myBD.getNumeroAlumnos()==150) {
									cout << "\n\tError\n";
									cout <<  "\n\tNumero maximo de la base de datos (" << myBD.getNumeroAlumnos() << ") completado\n";
									cout <<"\tPulse 1 para volver al menú";
									cin.ignore();
									cin.get();
									system("clear");
									break;
								} 

								// 
								cout << "\tNUMERO DE ALUMNOS: " << myBD.getNumeroAlumnos() << RESET;
								cout<<"\n";
								
											
								// PIDE DATOS OBLIGATORIOS ···
								datosAlumno datos;
								inicializardatos(datos);
								cout  << "\tIntroduzca los datos obligatorios del nuevo alumno: "<<endl;

								cout << "\tDNI : " << ;
								cin.ignore();
								cin.getline(datos.dni, 10, '\n');
								cout << "\tNombre : " << endl;
								cin.getline(datos.nombre, 30, '\n');
								cout << "\tApellidos : " << endl;
								cout << "\tFecha de nacimiento : " << endl;
								cin.getline(datos.fecha_nacimiento, 10, '\n');
								cout << "\tTelefono : " << endl;
								cin >> datos.telefono;
								cout << "\tEmail corporativo : " << endl;
								cin.ignore();
								cin.getline(datos.email_corporativo, 30, '\n');
								cout << "\tDomicilio : " <<endl ;
								cin.getline(datos.domicilio, 30, '\n');
								cout << "\tCurso : " << endl;
								cin >> datos.curso;
									 
								if( strlen(datos.nombre)==0 || strlen(datos.dni)==0 || strlen(datos.apellidos)==0 || strlen(datos.fecha_nacimiento)==0 || strlen(datos.email_corporativo)==0 || strlen(datos.domicilio)==0) {
								cout << BOLD_RED << "\n\tERROR" << endl;
									cout << "\n\tFaltan por introducir parametros" << endl;
									cout << "\n\tPulse 1 para volver al menú";
									cin.ignore();
									cin.get();
									system("clear");
									break;

								Alumno aux(datos); // Constructor con estructura
								
								cout << endl << "\t***" << endl << endl;
								// COMPRUEBA QUE EL ALUMNO NO HA SIDO INTRODUCIDO ANTERIORMENTE ···
								list <Alumno> alumnosencontrados;
								bool encontrado;


								cout << "\tComprobando que el alumno no se haya dado de alta" << endl;
								cout << "\t¿Como desea buscar al alumno?" << endl;
								cout << "\t\t1. DNI\n\t\t2. Apellidos\n\n";
								cout << "\t¿Como desea buscar? : " <<endl;
								cin >> opcionBusqueda;
								if(opcionBusqueda==1) {
									encontrado=myBD.buscarAlumnoDNI(alumnosencontrados, aux);
								} else if (opcBusqueda == 2) {
									encontrado=(myBD.buscarAlumnoApellido(alumnosencontrados, aux) and myBD.buscarAlumnoDNI(alumnosencontrados, aux));
								} else {
									cout "\n\tError" << endl;
									cout << "\n\tOpcion no de busqueda no aceptada" << endl;
									cout << "\n\tPulse 1 para volver al menú";<<endl;
									cin.ignore();
									cin.get();
									system("clear");
									break;
								}
								if(encontrado==true) {	// ALUMNO YA INTRODUCIDO
									cout <<"\n\tError" << endl;
									cout <<"\n\tEl alumno introducido se encuentra en la base de datos." << endl;
									cout << "\n\tPulse 1 para volver al menú";
									cin.ignore();
									cin.get();
									system("clear");
									break;
								}
								// DATOS Opcionales
								cout << "\t¿Quiere introducir los datos opcionales del nuevo alumno?" << endl;
								cout << "\tDatos opcionales:" << endl;
								cout << "\t\tNota\n\t\tLider\n\t\tEquipo\n";
								cout << "\tPulse 0 si quiere introducir los datos opcionales: " <<endl;	

								int datosOpc;
								cin >> datosOpc;

								if(datosOpc == 1) {
									system("clear");
									cout << "\tINTRODUZCA LOS DATOS ADICIONALES DEL NUEVO ALUMNO"<< endl;
									cout <<"\tNota : " << endl;
									cin >> datos.nota;
									cout << "\tEquipo : " << endl;
									cin >> datos.equipo;
									cout << "\tLider (1: Si; 0: No): " << endl;
									cin >> datos.lider;


}
				system("clear");

			break;

			case 2:
				system("clear");
			break;

			case 3:
				system("clear");
			break;

			case 4:
				system("clear");
			break;

			case 5:
			{
					system("clear");
					int opc=0;
	
	do{

	std::ifstream date("date.txt");

	std::cout<<"Utima Copia de Seguridad Realizada: ";

	if(!date.is_open()) std::cout<<"---"<<std::endl;
	else
	{
		char aux[20];
		date.getline(aux, 20);
		std::cout<<aux<<std::endl;

	}

	date.close();
		
		std::cout<<std::endl<<"--------------------------------------------------------"<<std::endl;
		std::cout<<"¿Quiere realizar el guardado de la base de datos actual?"<<std::endl<<std::endl;

		std::cout<<"\t1. Si"<<std::endl;
		std::cout<<"\t2. No"<<std::endl;

		std::cout<<std::endl<<"Opcion: ";
		std::cin>>opc;

		if(opc==1)
		{
			system("clear");
			std::cout<<"Realizando copia..."<<std::endl;
			sleep(1);

			system("date +%d-%m-%y-%H%M > date.txt");

			std::ifstream date("date.txt");
			char aux[20], name_file[30]="CSBD_";

			date.getline(aux, 20);
			strcat(name_file, aux);
			strcat(name_file, ".bin");
			d.setNombreBD(name_file);

			
			if(d.pues no escribeBD()==true)	
			{
				std::cout<<"Copia realizada con exito.";
			}
			else
			{
				std::cout<<"Error al realizar la copia."<<std::endl;

			}
			
			
			sleep(1);
			system("clear");
			opc=2;
		}

		else if(opc==2) 
		{
			system("clear");
			std::cout<<"Volviendo al menu..."<<std::endl;
			sleep(2);
			system("clear");	//Cambios
			
		}
		else
		{
			system("clear");
			std::cout<<"Opcion no valida."<<std::endl<<std::endl;
			std::cout<<std::endl<<"--------------------------------------------------------"<<std::endl;
		}
		
	}while(opc!=2);

				

			}

			break;

			case 6:
				system("clear");
				
			break;

			case 7:
				system("clear");
			break;

			case 8:
				system("clear");
			break;

			case 0:
				system("clear");
				cout<<"Cerrando el programa."<<endl;
				cout<<"Por favor, espere..."<<endl<<endl;

			break;

			default:

				system("clear");
				cout<<"La opcion seleccionada ("<<opcion<<") no existe"<<endl;
				cout<<"Por favor, espere para introducir otra opcion a continuacion"<<endl;
				sleep(4);
				system("clear");

			break;
		}

	}while(opcion!=0);


}