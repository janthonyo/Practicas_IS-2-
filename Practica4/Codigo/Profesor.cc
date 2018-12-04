#include <string.h>
#include <stdio.h>
#include <fstream>
#include "Profesor.h"

using namespace std;

int Profesor::login(std::string usuario, std::string contrasena)
{

	if((usuario=="usuario")&&(contrasena=="12345")) return 1;	

	else if((usuario=="usuario")&&(contrasena=="54321")) return 2;

	system("clear");

	cout<<"Nombre de usuario o contraseña incorrectos."<<endl<<endl;

	return 0;

};