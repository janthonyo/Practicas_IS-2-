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

		Profesor p;
		string user, key;

		cout << "Usuario: ";
		cin >> user;

		system("clear");

		cout << "Contraseña: ";
		cin >> key;
		system("clear");

		acceso=c.login(user, key);
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
				system("clear");
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