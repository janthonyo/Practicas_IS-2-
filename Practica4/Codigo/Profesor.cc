#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fstream>
#include "Profesor.h"
#include "alumno.h"

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

void Profesor::register_ayt()
{
	std::string usuario;
	std::string contra;
	std::string verified_contra;

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

		if(contra==verified_contra)
		{
			std::ofstream file("profesores.txt");
			file << usuario << "," << contra << "," <<"2\n";
			file.close();
			system("clear");
			std::cout<<"Registro completado con éxito"<<std::endl;
			sleep(4);
			system("clear");
		}

		else
		{
			system("clear");
			std::cout<<std::endl<<std::endl<<"La verificacion de la contraseña no es correcta."<<std::endl;
			std::cout<<"Por favor introduzca de nuevo los datos"<<std::endl<<std::endl;
		}
	}while(contra!=verified_contra);
}

bool Profesor::guardarBD()
{



}