#ifndef COPIAEXTERNA_H
#define COPIAEXTERNA_H
	#include "bd.h"
	#include <cstdlib> // C Standard General Utilities Library http://www.cplusplus.com/reference/cstdlib/

	// void crearCopiaExterna(string nombre);
	// recibe como parametro el nombre de la base de datos sin la extension .bin
	// crea una copia de la base de datos local temporal en el directorio /tmp/copia_externa
	// si no existe el directorio lo crea
	// si no esta inicializado en git, lo inicializa
	// carga la copia de seguridad en git
	void crearCopiaExterna(string nombre);

	// bool cargarCopiaExterna(string nombre);
	// recibe como parametro el nombre de la base de datos sin la extension .bin
	// crea una copia de la base de datos externa en el directorio /tmp/copia_externa
	// si no existe el directorio lo crea
	// si no esta inicializado en git, lo inicializa
	// carga la copia de seguridad en el sistema
	bool cargarCopiaExterna(string nombre);

#endif