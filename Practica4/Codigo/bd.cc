// bd.cc
// practica 4
// Ingenieria del software - UCO
// contiene las funciones de la clase

BD::BD(string nombre) {
	nombre_fichero_ = nombre;
} 

void BD::setAlumnos() {
	char dni[9], nombre[20], apellidos[20], fecha_nacimiento[12], telefono[9], email[30], domicilio[30], curso, nota[2], equipo[2], lider[2];
	Alumno alumno;
	alumnos_.clear(); // clear (list) elimina el contenido de una lista

	ifstream fichero_entrada(nombre_fichero_); // abre un fichero y lo asocia al flujo de entrada

	if (fichero_entrada.is_open()) { // is_open() devuelve true si el fichero se ha abierto y se ha asociado al flujo de entrada
		
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

			// hacer aqui los set alumno para establecer los valores del objeto

			// push_back añade el elemento recibido al final de la lista
			alumnos_.push_back(alumno);
		}

		// close() cierra el fichero
		// open() se usa para abrir el fichero en caso de que ifstream no reciba el nombre del fichero
		fichero_entrada.close();
	} else { // si is_open devuelve false, se muestra un mensaje de error y finaliza el programa
		cout << "Error al abrir el fichero.\n";
		exit(-1);
	}
}
