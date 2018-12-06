// bd.cc
// practica 4
// Ingenieria del software - UCO
// contiene las funciones de la clase

#include "bd.h"

BD::BD(string nombre) {
	nombre_fichero_ = nombre;
} 

void BD::setAlumnos() {
	char dni[9], nombre[20], apellidos[20], fecha_nacimiento[12], telefono[9], email[30], domicilio[30], curso, nota[2], equipo[2], lider[2];
	Alumno alumno;
	alumnos_.clear(); // clear (list) elimina el contenido de una lista

	ifstream fichero_entrada(nombre_fichero_); // abre un fichero y lo asocia al flujo de entrada

	if (!fichero_entrada.is_open()) { // si is_open devuelve false, se muestra un mensaje de error y finaliza el programa
		cout << "Error al abrir el fichero.\n";
		exit(-1);
	}

	// con fichero_entrada.getline() se guarda lo leido en la variable
	while(fichero_entrada.getline(dni, 9, ',')) { // getline devuelve false si ha acabado el fichero
		fichero_entrada.getline(nombre, 20, ',');
		fichero_entrada.getline(apellidos, 20, ',');
		fichero_entrada.getline(fecha_nacimiento, 12, ',');
		fichero_entrada.getline(telefono, 9, ',');
		fichero_entrada.getline(email, 30, ',');
		fichero_entrada.getline(domicilio, 30, ',');
		fichero_entrada.getline(curso, 1, ',');
		fichero_entrada.getline(nota, 2, ',');
		fichero_entrada.getline(equipo, 2, ',');
		fichero_entrada.getline(lider, 2, '\n');

		// se guardan los valores leidos en el objeto alumno
		// con atoi() se convierten los char a int

		alumno.setDni(dni);
		alumno.setNombre(nombre);
		alumno.setApellidos(apellidos);
		alumno.setFecha_nacimiento(fecha_nacimiento);
		alumno.setTelefono(aoti(telefono));
		alumno.setEmail(email);
		alumno.setDomicilio(domicilio);
		alumno.setCurso(aoti(curso));
		alumno.setNota(aoti(nota));
		alumno.setEquipo(aoti(equipo));
		alumno.setLider(lider);

		// push_back añade el elemento recibido al final de la lista
		alumnos_.push_back(alumno);
	}

	// close() cierra el fichero
	// open() se usa para abrir el fichero en caso de que ifstream no reciba el nombre del fichero
	fichero_entrada.close();
}

bool BD::escribeBD(string nombre) {
	list <Alumno> :: iterator it; // creamos el iterador para recorrer la lista de Alumnos
	ofstream f(nombre); // abre el fichero y lo asocia al flujo de salida

	// is_open() devuelve true si el fichero se ha abierto y se ha asociado al flujo de entrada
	if (!f.is_open()) { return false; }

	// empty() devuelve true si la lista esta vacia
	else if(alumnos_.empty()) { f.close(); return false; }

	// el bucle recorre toda la lista de jugadores para insertar los datos en el fichero
	for (it = alumnos_.begin(); it != alumnos_.end(); it++) {
		// el operador << funciona de la misma forma que en cout, envia los datos indicados al flujo de salida
		// sige el formato: DNI,nombre,apellidos,Fecha de nacimiento,Telefono,email,domicilio,curso,nota,equipo,lider
		f << it->getDni() + ",";
		f << it->getNombre() + ",";
		f << it->getApellidos() + ",";
		f << it->getFecha_nacimiento() + ",";
		f << it->getTelefono() + ",";
		f << it->getEmail() + ",";
		f << it->getDomicilio() + ",";
		f << it->getCurso() + ",";
		f << it->getNota() + ",";
		f << it->getEquipo() + ",";
		f << it->getLider() + "\n";
	}

	f.close(); // close() cierra el fichero

	return true;
}
