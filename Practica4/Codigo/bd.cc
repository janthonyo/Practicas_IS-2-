// bd.cc
// practica 4
// Ingenieria del software - UCO
// contiene las funciones de la clase

#include "bd.h"

BD::BD(string nombre) {
	nombreBD_ = nombre;
} 

void BD::setAlumnos() {
	string dni, nombre, apellidos, fecha_nacimiento, telefono, email, domicilio, curso, nota, equipo, lider;
	alumnos_.clear(); // clear (list) elimina el contenido de una lista

	ifstream inputFile(nombreBD_); // abre un fichero y lo asocia al flujo de entrada

	if (!inputFile.is_open()) { // si is_open devuelve false, se muestra un mensaje de error y finaliza el programa
		cout << "Error al abrir el fichero.\n";
		exit(-1);
	}

	// con fichero_entrada.getline() se guarda lo leido en la variable
	while(getline(inputFile, dni, ',')) { // getline devuelve false si ha acabado el fichero
		getline(inputFile, nombre, ',');
		getline(inputFile, apellidos, ',');
		getline(inputFile, fecha_nacimiento, ',');
		getline(inputFile, telefono, ',');
		getline(inputFile, email, ',');
		getline(inputFile, domicilio, ',');
		getline(inputFile, curso, ',');
		getline(inputFile, nota, ',');
		getline(inputFile, equipo, ',');
		getline(inputFile, lider, '\n');

		// se guardan los valores leidos en el objeto alumno
		// con stoi() se convierten los string a int

		Alumno alumno(dni, nombre, apellidos, fecha_nacimiento, stoi(telefono), email, domicilio, stoi(curso), stoi(nota), stoi(equipo), lider);

		// push_back añade el elemento recibido al final de la lista
		alumnos_.push_back(alumno);
	}

	// close() cierra el fichero
	// open() se usa para abrir el fichero en caso de que ifstream no reciba el nombre del fichero
	inputFile.close();
}

bool BD::escribeBD() {
	list <Alumno> :: iterator it; // creamos el iterador para recorrer la lista de Alumnos
	ofstream f(nombreBD_); // abre el fichero y lo asocia al flujo de salida

	// is_open() devuelve true si el fichero se ha abierto y se ha asociado al flujo de entrada
	if (!f.is_open()) { return false; }

	// empty() devuelve true si la lista esta vacia
	else if(alumnos_.empty()) { f.close(); return false; }

	// el bucle recorre toda la lista de alumnos para insertar los datos en el fichero
	for (it = alumnos_.begin(); it != alumnos_.end(); it++) {
		// el operador << funciona de la misma forma que en cout, envia los datos indicados al flujo de salida
		// sige el formato: DNI,nombre,apellidos,Fecha de nacimiento,Telefono,email,domicilio,curso,nota,equipo,lider
		f << it->getDni() + ",";
		f << it->getNombre() + ",";
		f << it->getApellidos() + ",";
		f << it->getFechaNacimiento() + ",";
		f << it->getTelefono() << ",";
		f << it->getEmail() + ",";
		f << it->getDomicilio() + ",";
		f << it->getCurso() << ",";
		f << it->getNota() << ",";
		f << it->getEquipo() << ",";
		f << it->getLider() << endl;
	}

	f.close(); // close() cierra el fichero

	return true;
}

bool BD::addAlumno(Alumno alumno) {

	// creaomos un iterador con la lista de alumnos
	// find busca dentro del iterador y devuelve el valor de la primera coincidencia
	// si no encuentra nada devuelve la ultima posicion
	list <Alumno> :: iterator it;

	for (it = alumnos_.begin(); it != alumnos_.end(); it++) {
		if (it->getDni() == alumno.getDni()) { return false; }
	}

	alumnos_.push_back(alumno);

	return true;
}
