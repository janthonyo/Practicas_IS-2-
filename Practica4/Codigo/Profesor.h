#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
//#include "alumno.h"

struct datos_profesor
{
	char _usuario[100];
	char _contra[100];
	int _rol;
};

class Profesor
{
private:

	std::string usuario_;
	int rol_;	//Asignaremos un 1 si es coordinador.
				//				 2 si es ayudante.

public:

	inline Profesor(std::string usuario="usuario", int rol=2)
	{
		usuario_=usuario;
		rol_=rol;
		
	};

	int login(std::string usuario, std::string contrasena); //Hecho
	void register_ayt(); //Hecho

	inline int getRol(){return rol_;};
	inline void setRol(int rol){rol_=rol;};
	inline std::string getUsuario(){return usuario_;};
	inline void setUsuario(std::string usuario){usuario_=usuario;};

	//bool guardarBD(); //Hecha
	//bool cargarBD();  //Hecha

	//bool guardarCSext();		//Manu
	//bool cargarCSext();		//Manu

	
};