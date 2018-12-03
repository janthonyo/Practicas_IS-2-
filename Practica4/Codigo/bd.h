// bd.h
// define las funciones de la clase y contiene los comentarios sobre su funcionamiento

#ifndef BD_H
#define BD_H

	#include "alumno.h"
	#include <list>
	#include <string>

	class BD {
		private:
			list <Alumno> alumnos_; // lista que contiene los alumnos de la clase de is
			string nombre_fichero_; // variable que guarda el nombre de la base de datos que se quiere cargar
		
		public:
			// observadores y modificadores para la lista de alumnos
			void setAlumnos();
			inline Alumno getAlumnos() { return alumnos_; }

			// observadores y modificadores para el nombre del fichero
			inline void setNombreFichero(string nombre) { nombre_fichero_ = nombre; }
			inline string getNombreFichero() { return nombre_fichero_; }

			// bool introducirAlumno(Alumno newAlumno)
			// recibe como parametro un objeto alumno y lo introduce en la base de datos
			// devuelve true si lo ha introducido y false en caso contrario
			bool introducirAlumno(Alumno newAlumno);

			// bool modificarAlumno(Alumno newAlumno)
			// recibe como parametro un objeto alumno y busca en la base de datos una coincidencia para modificarlo
			// puede modificar uno o varios datos
			// devuelve true si lo ha modificado y false en caso contrario
			bool modificarAlumno(Alumno alumno);

			// ¿bool? buscarAlumno();

	};

#endif
