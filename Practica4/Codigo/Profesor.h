#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Profesor
{
private:

	std::string usuario_;
	int rol_;	//Asignaremos un 1 si es coordinador.
				//				 2 si es ayudante.
	std::string fichero_;

public:

	inline Profesor(std::string usuario="usuario", std::string fichero="prueba.bin", int rol=1)
	{
		usuario_=usuario;
		rol_=rol;
		fichero_=fichero;
	};

	int login(std::string usuario, std::string contrasena);
};