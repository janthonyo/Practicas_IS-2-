#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fstream>
#include "Profesor.h"
#include "alumno.h"
#include "bd.h"

int Profesor::login(std::string usuario, std::string contrasena)
{
	char aux[50];
	std::string user_file;
	std::string key_file;
	int rol_file;
	int encontrado=0;

	//Creamos las variables donde posteriormente guardaremos los datos del fichero profesores.txt


	std::ifstream fichero("profesores.txt");
	//Abre el fichero profesores.txt para lectura.

	//Estructura del fichero: usuario, contraseña, rol.
	while((fichero.getline(aux, 50, ','))&&(encontrado==0))
	{
		user_file=aux;
		fichero.getline(aux, 50, ',');
		key_file=aux;
		fichero.getline(aux, 50);
		rol_file=atoi(aux);

		if((user_file==usuario)&&(key_file==contrasena))
		{
			usuario_=user_file;
			rol_=rol_file;
			encontrado=1;
		}

		//Si los datos correspondientes al usuario y la contraseña del fichero son iguales que los
		//datos introcudidos por el usuario, se le asigna a la case profesor el nombre del usuario
		//y el rol que tiene asignado (ayudante o coordinador).
	}

	fichero.close();

	if(encontrado==0)
	{
		std::cout<<"Nombre de usuario o contraseña incorrectos."<<std::endl<<std::endl;
		return 0;
	}

	//Si el usuario no ha sido encontrado, el programa mostraria un mensaje y se volverian a pedir los datos 

	if(encontrado==1) return rol_;

	//Si el profesor ha sido encontrado, el sistema devuelve el rol de este para mostrarle las funciones a las
	//que tiene acceso.

}

void Profesor::register_ayt()
{
	std::string usuario;
	std::string contra;
	std::string verified_contra;
	char datos [50];

	std::ofstream aux("auxiliar.txt");
	std::ifstream file("profesores.txt");

	while(file.getline(datos, 50, ','))
	{
		aux<<datos<<",";
		file.getline(datos, 50, ',');
		aux<<datos<<",";
		file.getline(datos, 50);
		aux<<datos<<"\n";
		

	}

	file.close();
	remove("profesores.txt");
	//Guardamos los datos en otro fichero auxiliar y borramos el fichero profesores para mantener los datos (TAMPOCO LOS GUARDA).

	//Creamos las variables que necesitaremos para el registro de un nuevo usuario.

	std::cout<<"---------------------------------------------------------------"<<std::endl<<std::endl;
	std::cout<<"Registrar profesor"<<std::endl<<std::endl;
	std::cout<<"---------------------------------------------------------------"<<std::endl<<std::endl;
	std::cout<<"A continuacion, se procedera al proceso de registro de"<<std::endl;
	std::cout<<"un nuevo profesor para acceder al sistema. Dicho profesor"<<std::endl;
	std::cout<<"accedera al sistema como ''ayudante'', pudiendo solo usar"<<std::endl;
	std::cout<<"las funciones destinadas para estos."<<std::endl<<std::endl;
	std::cout<<"Si desea cambiar su rol a ''coordinador'', pongase en"<<std::endl;
	std::cout<<"contacto con algun profesor reconocido como ''colaborador''"<<std::endl<<std::endl;
	std::cout<<"---------------------------------------------------------------"<<std::endl<<std::endl;

	do{
		std::cout<<"Usuario: ";
		std::cin>>usuario;
		std::cout<<std::endl<<"Contraseña: ";
		std::cin>>contra;
		std::cout<<std::endl<<"Verifica la contraseña: ";
		std::cin>>verified_contra;

		//El programa pide al usuario que introduzca el usuario que usara y una contraseña que tendra que validar.

		if(contra==verified_contra)
		{
			aux << usuario << "," << contra << "," <<"2\n";
			aux.close();
			rename("auxiliar.txt", "profesores.txt");
			system("clear");
			std::cout<<"Registro completado con éxito"<<std::endl;
			sleep(3);
			system("clear");

			//Si la contraseña esta correctamente verificada, los datos del profesor son guardados en el fichero de
			//profesores para su posterior acceso al sistema y se le asigna al nuevo profesor el rol de 'Ayudante'.

			//Esta funcion tiene un fallo bastante importante y es que cada vez que un nuevo profesor es añadido, SON
			//BORRADOS todos aquellos que ya estaban. El problema esta al definir el modo de apertura del fichero de
			//manera que no se puede abrir como ios::app para que introduzca los nuevos datos sin borrar los antiguos.

		}

		else
		{
			system("clear");
			std::cout<<std::endl<<std::endl<<"La verificacion de la contraseña no es correcta."<<std::endl;
			std::cout<<"Por favor introduzca de nuevo los datos"<<std::endl<<std::endl;

			//Si la contraseña no es correcta, el programa mostrara un mensaje y pedira los datos de nuevo.
		}
	}while(contra!=verified_contra);
}

bool Profesor::guardarBD()
{

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

			std::ifstream date("date.txt");
			char aux[20];
			
			system("date +%d-%m-%y-%H%M > date.txt");
			date.getline(aux, 20);

			system("clear");

			if(escribeBD(aux)==true)	
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		else if(opc==2) 
		{
			system("clear");
			std::cout<<"Volviendo al menu..."<<std::endl;
			sleep(2);
			system("clear");	//Cambios
			return false;
		}
		else
		{
			system("clear");
			std::cout<<"Opcion no valida."<<std::endl<<std::endl;
			std::cout<<std::endl<<"--------------------------------------------------------"<<std::endl;
		}
		
	}while(opc!=2);

}