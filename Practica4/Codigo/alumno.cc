#include <iostream>
#include "BD.h"
#include "Alumno.h"
#include <string>
#include <cstring>

using namespace std;

	void inicializardatos(datosAlumno &datos) {
		strcpy(datos.nombre, "");
		strcpy(datos.dni, "");
		strcpy(datos.apellidos, "");
		strcpy(datos.fecha_nacimiento, "");
		strcpy(datos.email_corporativo, "");
		strcpy(datos.domicilio, "");
		datos.equipo=-1;
		datos.telefono=-1;
		datos.curso=-1;
		datos.nota=-1;
		
	}


	Alumno::Alumno(string DNI="", string nomb="", string apell="", string fech="", string email="", string domic="", int tlf=0, int cur=0, int nt=0, int equip=0, bool lid=0){
		dni_=DNI;
		nombre_=nomb;
		apellidos_=apell;
		fecha_nacimiento_=fech;
		email_corporativo_=email;
		domicilio_=domic;
		telefono_=tlf;
		curso_=cur;
		nota_=nt;
		equipo_=equip;
		lider_=lid;
	};

	Alumno::Alumno(datosAlumno datos){

		dni_=datos.dni;
		nombre_=datos.nombre;
		apellidos_=datos.apellidos;
		fecha_nacimiento_=datos.fecha_nacimiento;
		email_corporativo_=datos.email_corporativo;
		domicilio_=datos.domicilio;
		telefono_=datos.telefono;
		curso_=datos.curso;
		nota_=datos.nota;
		equipo_=datos.equipo;
		lider_=false;
	
	};

	Alumno::Alumno(){
		dni_="";
		nombre_="";
		apellidos_="";
		fecha_nacimiento_="";
		email_corporativo_="";
		domicilio_="";
		telefono_=0;
		curso_=0;
		nota_=0;
		equipo_=0;
		lider_=false;
	};

