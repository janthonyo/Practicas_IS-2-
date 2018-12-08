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

	inline Profesor(std::string usuario="usuario", std::string fichero="prueba.bin", int rol=2)
	{
		usuario_=usuario;
		rol_=rol;
		fichero_=fichero;
	};

	int login(std::string usuario, std::string contrasena);
	void register_ayt();
	inline int getRol(){return rol_;};
	inline void setRol(int rol){rol_=rol;};
	inline std::string getUsuario(){return usuario_;};
	inline void setUsuario(std::string usuario){usuario_=usuario;};



	//bool guardarBD(); //Necesito la clase alumnos
	//bool cargarBD();  //Necesito la clase alumnos

	//bool guardarCSext();		//Manu
	//bool cargarCSext();		//Manu

	
};