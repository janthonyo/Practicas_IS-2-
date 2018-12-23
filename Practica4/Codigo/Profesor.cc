#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fstream>
#include "Profesor.h"
#include "alumno.h"
#include "bd.h"

using namespace std;

int Profesor::login(std::string usuario, std::string contrasena)
{
	datos_profesor aux;
	int encontrado=0;
	std::string user, key;

	std::ifstream fichero("profesores.bin", ios::in | ios::binary);

	while((fichero.read((char*)&aux, sizeof(datos_profesor)))&&(encontrado==0))
	{
		user=aux._usuario;
		key=aux._contra;
		if((usuario==user)&&(contrasena==key))
		{
			usuario_=aux._usuario;
			rol_=aux._rol;
			encontrado=1;
		}
	}

	fichero.close();

	if(encontrado==0)
	{
		std::cout<<"Nombre de usuario o contraseña incorrectos."<<std::endl<<std::endl;
		return 0;
	}
	if(encontrado==1) return rol_;
}

void Profesor::register_ayt()
{
	
	char verified_contra[30];
	datos_profesor aux;
	std::ofstream file("profesores.bin", ios::out | ios::binary | ios::app);

	aux._rol=2;
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
		cin.ignore();
		cin.getline(aux._usuario, 100);

		std::cout<<std::endl<<"Contraseña: ";
		cin.getline(aux._contra, 100);
		
		std::cout<<std::endl<<"Verifica la contraseña: ";		
		cin.getline(verified_contra, 30);

		//El programa pide al usuario que introduzca el usuario que usara y una contraseña que tendra que validar.

		if(strcmp(verified_contra, aux._contra)==0)
		{
			file.write((char*)&aux, sizeof(datos_profesor));
			file.close();
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
	}while(strcmp(verified_contra, aux._contra)!=0);
}

