#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "Profesor.h"

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
			cout<<"\t5. Guardar Base de Datos\n";
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
					/*

					std::cout<<"Ultima copia de seguridad realizada: "<<fecha<<std::endl<<std::endl;
					*/
					cout<<"¿Quiere realizar el guardado de la base de datos actual?"<<endl<<endl;

					cout<<"\t1. Si"<<endl;
					cout<<"\t2. No"<<endl;

					cout<<std::endl<<"Opcion: ";
					cin>>opc;

					if(opc==1)
					{
						system("clear");
						cout<<"Realizando copia..."<<endl;
						
						
						bool res=c.guardarBD();

						if(res==true)
						{
							system("clear");
							cout<<"Copia realizada con exito.";
							opc=2;
						}

						else cout<<"Hubo un error al realizar la copia.";

					}

					else if(opc==2) 
					{
						system("clear");
						cout<<"Volviendo al menu..."<<endl;
						sleep(2);
						system("clear");
					}
					else
					{
						system("clear");
						cout<<"Opcion no valida."<<endl<<endl;
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