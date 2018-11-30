// bd.h
// define las funciones de la clase y contiene los comentarios sobre su funcionamiento

#ifndef BD_H
#define BD_H

	#include "alumno.h"
	#include <list>
	#include <string>

	class bd {
		private:
			list <Alumno> alumnos_; // lista que contiene los alumnos de la clase de is
			string nombre_fichero_; // variable que guarda el nombre de la base de datos que se quiere cargar
		
		public:
			// observadores y modificadores para la lista de alumnos
			void setAlumnos(Alumno alumnos);
			Alumno getAlumnos();

			// observadores y modificadores para el nombre del fichero
			void setNombreFichero(string nombre);
			string getNombreFichero();
	};

#endif
