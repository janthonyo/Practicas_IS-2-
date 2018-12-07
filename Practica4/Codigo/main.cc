#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <string.h>
#include "Profesor.h"

using namespace std;

int main()
{

Profesor c;
system("clear");

int acceso=0;

	while(acceso==0)
	{

		Profesor p;
		string user, key;

		cout << "Usuario: ";
		cin >> user;

		system("clear");

		cout << "Contraseña: ";
		cin >> key;

		acceso=c.login(user, key);
	}

if(acceso==1)
{
	cout<<"----------------------------------------"<<endl<<endl;

	cout<<"----------------------------------------"<<endl<<endl;
}

else if(acceso==2)
}