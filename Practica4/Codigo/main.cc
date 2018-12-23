#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "Profesor.h"
#include "bd.h"
#include "copiaExterna.h"

using namespace std;

int main()
{

Profesor c;

system("clear");

int acceso=0;
int opcion;

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
	std::cout<<"Si no existe la BD, se creara una con dicho nombre."<<std::endl;
	std::cout<<"Introduzca el nombre sin la extension."<<std::endl<<std::endl;
	std::cout<<"Nombre: > ";

	std::string nombreBd;
	cin>>nombreBd;

	BD d(nombreBd);
	d.setAlumnos();

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
			{
				system("clear");

				if(d.getNumeroAlumnos()==150) {
					cout << "\n\tError\n";
					cout <<  "\n\tNumero maximo de la base de datos (" << d.getNumeroAlumnos() << ") alcanzado\n";
					cout <<"\tPulse intro para volver al menú";
					cin.ignore();
					cin.get();
					system("clear");
					break;
				} 

				cout << "\tNUMERO DE ALUMNOS: " << d.getNumeroAlumnos() << endl;
				cout<<"\n";

				
				string dni;
				string nombre;
				string apellidos;
				string fechaNacimiento;
				int telefono;
				string email;
				string domicilio;
				int curso;
				int nota;			 
				int equipo=0;		 		//		0: No tiene
				string lider="";

				cout  << "\tIntroduzca los datos obligatorios del nuevo alumno: "<<endl;

				cout<<"\tDNI: ";
				cin>>dni;

				cout << "\tNombre: ";
				cin.ignore();
				cin>>nombre;

				cout << "\tApellido (Solo el primero): ";
				cin.ignore();
				cin>>apellidos;

				cout << "\tFecha de nacimiento (dd/mm/yy): ";
				cin.ignore();
				cin>>fechaNacimiento;

				cout << "\tTelefono : ";
				cin.ignore();
				cin>>telefono;

				cout <<"\tEmail corporativo : ";
				cin.ignore();
				cin>>email;

				cout << "\tDomicilio (Todo junto) : ";
				cin.ignore();
				cin >> domicilio;

				cout << "\tCurso : ";
				cin.ignore();
				cin>>curso;

				cout << "\tNota : ";
				cin.ignore();
				cin>>nota;

				system("clear");

				if( nombre=="" || dni=="" || apellidos=="" || fechaNacimiento=="" || telefono<0 || email==""|| domicilio==""||curso<0||nota<0||nota>10){
					cout <<"\n\tERROR" << endl;
					cout << "\n\tFaltan por introducir parametros" << endl;
					cout << "\n\tPulse intro para volver al menú";
					cin.ignore();
					cin.get();
					system("clear");
					break;
				}

			
				cout << "\tComprobando que el alumno no se haya dado de alta" << endl;
				
				if(d.buscarAlumnoDni(dni)==true) {	//El alumno ya se introdujo
					cout<<endl<<"\n\tError" << endl;
					cout <<"\n\tEl alumno introducido se encuentra en la base de datos." << endl;
					cout << "\n\tPulse intro para volver al menú";
					cin.ignore();
					cin.get();
					system("clear");
					break;
				}

				else {cout<<endl<<"\tEl alumno no se encuentra en la base de datos."<<endl;}
				// DATOS Opcionales
				cout <<endl<< "\t¿Quiere introducir los datos opcionales del nuevo alumno?" << endl;
				cout << endl <<"\tDatos opcionales:" << endl << endl;
				cout << "\t\tLider\n\t\tEquipo\n";
				cout << endl << endl << "\tPulse 0 si quiere introducir los datos opcionales: " <<endl;	

				int datosOpc;
				cout<<endl<<endl<<"Opcion: ";
				cin >> datosOpc;

				system("clear");
				if(datosOpc == 0) 
				{
					system("clear");
					cout << "\tEquipo : ";
					cin>>equipo;
					cout << "\tLider (Si/No): ";
					cin>>lider;
				}

				Alumno alumno(dni, nombre, apellidos, fechaNacimiento, telefono, email, domicilio, curso, nota, equipo, lider);

				if(d.introducirAlumno(alumno)==true)
				{
					if(d.escribeBD())	cout<<"Alumno añadido"<<endl;
				}
				
				else 		cout<<"Error al introducir el alumno."<<endl;

			}

			break;

			case 2:
			{
				system("clear");
				int opc=0;
				string searchDni, searchApellido;
				cout<<"¿Como desea buscar al alumno para modificar?"<<endl<<endl;

				cout<<"\t1. Por DNI."<<endl;
				cout<<"\t2. Por Apellido."<<endl<<endl;

				cout<<"Opcion: ";
				cin>>opc;

				if(opc==1)
				{
					system("clear");
					cout<<"Introduzca el DNI: ";
					cin>>searchDni;
					if(d.modificarAlumno(searchDni, opc)==true)
					{
						system("clear");
						if(d.escribeBD())cout<<"Alumno modificado con éxito"<<endl;

					}
					else
					{
						system("clear");
						cout<<"ERROR AL MODIFICAR ALUMNO."<<endl;	
					}

				}
				else if(opc==2)
				{
					system("clear");
					cout<<"Introduzca el apellido: ";
					cin>>searchApellido;
					if(d.modificarAlumno(searchApellido, opc)==true)
					{
						system("clear");
						cout<<"Alumno modificado con éxito"<<endl;
						d.escribeBD();

					}
					else
					{
						system("clear");
						cout<<"ERROR AL MODIFICAR ALUMNO."<<endl;
					}
				}
				else	cout<<"Opcion no valida."<<endl;

			}	

			break;

			case 3:
			{
				string dni;
				system("clear");
				cout<<"Introduzca el Dni del alumno a borrar: ";
				cin>>dni;

				if(d.eliminarAlumno(dni)==true)
				{
					system("clear");
					cout<<"Alumno eliminado."<<endl;
					d.escribeBD();
				}

				else
				{
					system("clear");
					cout<<"El alumno no se encuentra en la Base de datos."<<endl;

				}
			}
			break;

			case 4:
			{
				system("clear");
				int opc=0;
				cout<<"¿Como desea mostrar a los alumnos?"<<endl<<endl;
				cout<<"\t1. Mostrar todos."<<endl;
				cout<<"\t2. Mostrar uno."<<endl<<endl;

				cout<<"Opcion: ";
				cin>>opc;

				system("clear");

				if(opc==1)	
				{
					d.MostrarTodoslosAlumnos();
					cout<<endl<<"--<Pulse <Intro> para volver al menu>--";
					cin.get();
					cin.ignore();
					system("clear");
				}
				
				else if(opc==2)
				{
					string dni;
					cout<<endl<<"----------------------------"<<endl;
					cout<<"Introduzca el Dni del alumno en cuestion:";
					cin>>dni;
					d.MostrarUnAlumno(dni);
					cout<<endl<<"--<Pulse <Intro> para volver al menu>--";
					cin.get();
					cin.ignore();
					system("clear");
				}
				else	cout<<"Dicha opcion no existe."<<endl;

			}
			break;

			case 5:
			{
				system("clear");
				if(acceso==2) break;
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
						std::string nombre_BD;
						char aux[20], name_file[30]="CSBD_";

						date.getline(aux, 20);
						strcat(name_file, aux);
						strcat(name_file, ".bin");
						nombre_BD=d.getNombreBD();
						d.setNombreBD(name_file);

						
						if(d.escribeBD()==true)	
						{
							std::cout<<"Copia realizada con exito.";
						}
						else
						{
							std::cout<<"Error al realizar la copia."<<std::endl;

						}
						
						d.setNombreBD(nombre_BD);
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
			{
				system("clear");
				if(acceso==2) break;
				string name_file;
				cout<<"Introduzca el nombre de la copia a cargar: "<<endl<<endl;
				cout<<"Nombre: ";
				cin>>name_file;
				system("clear");

				d.setNombreBD(name_file);

				if(d.setAlumnos()==true)	cout<<"Fichero cargado con éxito."<<endl;
				else	cout<<"Se ha producido un error al cargar los datos."<<endl;
			}
				
			break;

			case 7:
			{
				string opc;
				system("clear");
				if(acceso==2) break;
				cout<<"¿Se hará una copia de la Base de datos actual? (Por defecto: s/n): ";

				cin>>opc;
				system("clear");

				if(opc!="s")
				{
					cout<<"Introduzca el nombre de la base de datos: ";
					cin>>opc;
					crearCopiaExterna(opc);
					break;
				}

				opc=d.getNombreBD();
				crearCopiaExterna(opc);
			}
			break;

			case 8:
			{
				system("clear");
				if(acceso==2) break;
				string opc;
				cout<<"¿Desea cargar una copia externa? (Por defecto: s/n): ";
				cin>>opc;

				system("clear");

				if(opc!="s")
				{
					cout<<"Volviendo al menu... ";
					sleep(1);
					system("clear");
					break;
				}

				cout<<"Introduzca el nombre de la copia a cargar: ";
				cin>>opc;
				if(cargarCopiaExterna(opc))
				{	
					d.setNombreBD(opc);
					d.setAlumnos();
					cout<<endl<<"Copia de Seguridad Cargada"<<endl;
				}
				else	cout<<endl<<"Error al cargar la Copia de Seguridad externa"<<endl;

				sleep(2);
				system("clear");
			}
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