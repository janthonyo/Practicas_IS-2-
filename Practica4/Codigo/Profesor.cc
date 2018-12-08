#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fstream>
#include "Profesor.h"

int Profesor::login(std::string usuario, std::string contrasena)
{
	char aux[50];
	std::string user_file;
	std::string key_file;
	int rol_file;
	int encontrado=0;

	//Estructura del fichero: usuario, contraseña, rol.

	std::ifstream fichero("profesores.txt");

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
	}

	fichero.close();

	if(encontrado==0)
	{
		std::cout<<"Nombre de usuario o contraseña incorrectos."<<std::endl<<std::endl;
		return 0;
	}

	if(encontrado==1) return rol_;


}