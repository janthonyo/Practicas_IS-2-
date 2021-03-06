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
			int numero_alumnos_;

		public:
			BD(string nombre);

			// observadores y modificadores para la lista de alumnos
			bool setAlumnos();
			inline list <Alumno> getAlumnos() { return alumnos_; }

			// observadores y modificadores para el nombre del fichero
			inline void setNombreBD(string nombre) { nombreBD_ = nombre; }
			inline string getNombreBD() { return nombreBD_; }

			inline int getNumeroAlumnos(){return numero_alumnos_;}

			// bool introducirAlumno(Alumno newAlumno)
			// recibe como parametro un objeto alumno y lo introduce en la base de datos
			// devuelve true si lo ha introducido y false en caso contrario
			bool introducirAlumno(Alumno newAlumno);

			// bool modificarAlumno(Alumno newAlumno)
			// recibe como parametro un objeto alumno y busca en la base de datos una coincidencia para modificarlo
			// puede modificar uno o varios datos
			// devuelve true si lo ha modificado y false en caso contrario
			bool modificarAlumno(string datos, int modo);

			// Alumno buscarAlumno()
			Alumno buscarAlumno();

			// bool escribeBD(string nombre)
			// recibe el nombre del fichero de la base de datos
			// escribe la lista de alumnos en el fichero de base de datos
			// devuelve true si se ha podido escribir y false en caso contrario
			bool escribeBD();

			// bool addAlumno() 
			// Recibe un alumno como parámetro y añade el alumno al final de la lista de alumnos y devuelve true. 
			// Si ya existe en la lista un alumno con ese DNI el método no hace nada y devuelve false.
			//bool addAlumno(Alumno alumno);

			bool buscarAlumnoDni(string dni);

			bool eliminarAlumno(string dni);

			void MostrarTodoslosAlumnos();

			void MostrarUnAlumno(string dni);
	};



#endif
