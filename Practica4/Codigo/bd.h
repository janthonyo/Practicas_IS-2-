// bd.h
// define las funciones de la clase y contiene los comentarios sobre su funcionamiento

#ifndef BD_H
#define BD_H

	#include "alumno.h"
	#include <fstream> // cabecera que proviene de las clases de entrada/salida para trabajar con ficheros http://www.cplusplus.com/reference/fstream/
	#include <string> // cabecera que introduce el tipo string y funciones para su tratamiento http://www.cplusplus.com/reference/string/ 
	#include <list> // clase perteneciente a la stl (standard template library) http://www.cplusplus.com/reference/stl/
	#include <cstdio> // C library to perform Input/Output operations http://www.cplusplus.com/reference/cstdio/
	using namespace std;

	class BD {
		private:
			list <Alumno> alumnos_; // lista que contiene los alumnos de la clase de is
			string nombreBD_; // variable que guarda el nombre de la base de datos que se quiere cargar
		
		public:
			// observadores y modificadores para la lista de alumnos
			void setAlumnos();
			inline Alumno getAlumnos() { return alumnos_; }

			// observadores y modificadores para el nombre del fichero
			inline void setNombreBD(string nombre) { nombreBD_ = nombre; }
			inline string getNombreBD() { return nombreBD_; }

			// bool introducirAlumno(Alumno newAlumno)
			// recibe como parametro un objeto alumno y lo introduce en la base de datos
			// devuelve true si lo ha introducido y false en caso contrario
			bool introducirAlumno(Alumno newAlumno);

			// bool modificarAlumno(Alumno newAlumno)
			// recibe como parametro un objeto alumno y busca en la base de datos una coincidencia para modificarlo
			// puede modificar uno o varios datos
			// devuelve true si lo ha modificado y false en caso contrario
			bool modificarAlumno(Alumno alumno);

			// Alumno buscarAlumno()
			Alumno buscarAlumno();

			// bool escribeBD(string nombre)
			// recibe el nombre del fichero de la base de datos
			// devuelve true si se ha podido escribir y false en caso contrario
			bool escribeBD(string nombre);

	};

#endif
