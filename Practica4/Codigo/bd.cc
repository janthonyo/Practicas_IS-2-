// bd.cc
// practica 4
// Ingenieria del software - UCO
// contiene las funciones de la clase

#include "bd.h"

BD::BD(string nombre) {
	nombreBD_ = nombre;
	numero_alumnos_=0;
} 

bool BD::setAlumnos() {
	char dni[50], nombre[50], apellidos[50], fecha_nacimiento[50], telefono[50], email[50], domicilio[50], curso[50], nota[50], equipo[50], lider[50];
	alumnos_.clear(); // clear (list) elimina el contenido de una lista

	ifstream inputFile(nombreBD_.c_str()); // abre un fichero y lo asocia al flujo de entrada

	if (!inputFile.is_open()) { // si is_open devuelve false, se muestra un mensaje de error y finaliza el programa
		cout << "Error al abrir el fichero.\n";
		return false;
	}

	// con fichero_entrada.getline() se guarda lo leido en la variable
	while(inputFile.getline(dni, 50, ',')) { // getline devuelve false si ha acabado el fichero
		inputFile.getline(nombre, 50, ',');
		inputFile.getline(apellidos, 50, ',');
		inputFile.getline(fecha_nacimiento, 50, ',');
		inputFile.getline(telefono, 50, ',');
		inputFile.getline(email, 50, ',');
		inputFile.getline(domicilio, 50, ',');
		inputFile.getline(curso, 50, ',');
		inputFile.getline(nota, 50, ',');
		inputFile.getline(equipo, 50, ',');
		inputFile.getline(lider, 50, '\n');

		// se guardan los valores leidos en el objeto alumno
		// con stoi() se convierten los string a int

		Alumno alumno(dni, nombre, apellidos, fecha_nacimiento, atoi(telefono), email, domicilio, atoi(curso), atoi(nota), atoi(equipo), lider);

		// push_back añade el elemento recibido al final de la lista
		alumnos_.push_back(alumno);
	}

	// close() cierra el fichero
	// open() se usa para abrir el fichero en caso de que ifstream no reciba el nombre del fichero
	inputFile.close();
	return true;
}

bool BD::escribeBD() {
	list <Alumno> :: iterator it; // creamos el iterador para recorrer la lista de Alumnos
	ofstream f(nombreBD_.c_str()); // abre el fichero y lo asocia al flujo de salida

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

bool BD::introducirAlumno(Alumno alumno) {

	// creaomos un iterador con la lista de alumnos
	// find busca dentro del iterador y devuelve el valor de la primera coincidencia
	// si no encuentra nada devuelve la ultima posicion

	alumnos_.push_back(alumno);
	numero_alumnos_++;

	return true;
}


bool BD::modificarAlumno(string datos, int modo)
{

	list<Alumno>::iterator i;
	string dni;
	string nombre;
	string apellidos;
	string fechaNacimiento;
	int telefono;
	string email;
	string domicilio;
	int curso;
	int nota;			 
	int equipo;		 		//		0: No tiene
	string lider;
	int found=0;

	if(modo==1)		//DNI
	{
		for(i=alumnos_.begin(); i!=alumnos_.end(); i++)
		{
			if(i->getDni()==datos)
			{
				cout<<"Alumno encontrado."<<endl<<endl;
				cout<<"Introduzca los nuevos datos. Para conservar los antiguos, introduzcalos nuevamente."<<endl<<endl;
				cout<<"-------------------------------------------------------------"<<endl;
				cout<<"DNI: ";
				cin>>dni;
				i->setDni(dni);
				cout<<"Nombre: ";
				cin>>nombre;
				i->setNombre(nombre);
				cout<<"Apellido: ";
				cin>>apellidos;
				i->setApellidos(apellidos);
				cout<<"Fecha de nacimiento (introducir como: dd/mm/yy): ";
				cin>>fechaNacimiento;
				i->setFechaNacimiento(fechaNacimiento);
				cout<<"Telefono: ";
				cin>>telefono;
				i->setTelefono(telefono);
				cout<<"Email: ";
				cin>>email;
				i->setEmail(email);
				cout<<"Domicilio: ";
				cin>>domicilio;
				i->setDomicilio(domicilio);
				cout<<"Curso: ";
				cin>>curso;
				i->setCurso(curso);
				cout<<"Nota: ";
				cin>>nota;
				i->setNota(nota);
				cout<<"Equipo: ";
				cin>>equipo;
				i->setEquipo(equipo);
				cout<<"¿Es lider? (Si/No): ";
				cin>>lider;
				found=1;
				cout<<"-------------------------------------------------------------"<<endl;
				return true;
			}
		}
		return false;
	}

	if(modo==2)		//Apellido
	{
		list<Alumno> aux;

		for(i=alumnos_.begin(); i!=alumnos_.end(); i++)
		{
			if(i->getApellidos()==datos) 
			Alumno alumno(i->getDni(), i->getNombre(), i->getApellidos(), i->getFechaNacimiento(), i->getTelefono(), i->getEmail(), i->getDomicilio(), i->getCurso(), i->getNota(), i->getEquipo(), i->getLider());


		}

		//mostrarAlumnos(aux);

		if(aux.size()==1)
		{
			cout<<"Introduzca los nuevos datos. Para conservar los antiguos, introduzcalos nuevamente."<<endl<<endl;
				cout<<"-------------------------------------------------------------"<<endl;
				cout<<"DNI: ";
				cin>>dni;
				i->setDni(dni);
				cout<<"Nombre: ";
				cin>>nombre;
				i->setNombre(nombre);
				cout<<"Apellido: ";
				cin>>apellidos;
				i->setApellidos(apellidos);
				cout<<"Fecha de nacimiento (introducir como: dd/mm/yy): ";
				cin>>fechaNacimiento;
				i->setFechaNacimiento(fechaNacimiento);
				cout<<"Telefono: ";
				cin>>telefono;
				i->setTelefono(telefono);
				cout<<"Email: ";
				cin>>email;
				i->setEmail(email);
				cout<<"Domicilio: ";
				cin>>domicilio;
				i->setDomicilio(domicilio);
				cout<<"Curso: ";
				cin>>curso;
				i->setCurso(curso);
				cout<<"Nota: ";
				cin>>nota;
				i->setNota(nota);
				cout<<"Equipo: ";
				cin>>equipo;
				i->setEquipo(equipo);
				cout<<"¿Es lider? (Si/No): ";
				cin>>lider;
				found=1;
				cout<<"-------------------------------------------------------------"<<endl;
				return true;
		}
		else if(aux.size()>=1)
		{

			cout<<"---------------------------------------------"<<endl;
			cout<<"Se han encontrado varias coincidencias de apellidos."<<endl;
			cout<<"Introduzca el DNI del alumno a eliminar."<<endl<<endl;
			cin>>dni;
			for(i=aux.begin(); i!=aux.end(); i++)
			{
				if((i->getDni()==dni)&&(i->getApellidos()==datos))
				{
					cout<<"Alumno encontrado."<<endl<<endl;
					cout<<"Introduzca los nuevos datos. Para conservar los antiguos, introduzcalos nuevamente."<<endl<<endl;
					cout<<"-------------------------------------------------------------"<<endl;
					cout<<"DNI: ";
					cin>>dni;
					i->setDni(dni);
					cout<<"Nombre: ";
					cin>>nombre;
					i->setNombre(nombre);
					cout<<"Apellido: ";
					cin>>apellidos;
					i->setApellidos(apellidos);
					cout<<"Fecha de nacimiento (introducir como: dd/mm/yy): ";
					cin>>fechaNacimiento;
					i->setFechaNacimiento(fechaNacimiento);
					cout<<"Telefono: ";
					cin>>telefono;
					i->setTelefono(telefono);
					cout<<"Email: ";
					cin>>email;
					i->setEmail(email);
					cout<<"Domicilio: ";
					cin>>domicilio;
					i->setDomicilio(domicilio);
					cout<<"Curso: ";
					cin>>curso;
					i->setCurso(curso);
					cout<<"Nota: ";
					cin>>nota;
					i->setNota(nota);
					cout<<"Equipo: ";
					cin>>equipo;
					i->setEquipo(equipo);
					cout<<"¿Es lider? (Si/No): ";
					cin>>lider;
					found=1;
					cout<<"-------------------------------------------------------------"<<endl;
					return true;
				}
			}
		}

		else return false;
	}
};
