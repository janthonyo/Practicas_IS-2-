#ifndef ALUMNO_H
#define ALUMNO_H

<<<<<<< HEAD
	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string>
>>>>>>> 2317e816898a591f5b4cb281cf698fddecb314b2

	using namespace std;

struct datosAlumno{
			char nombre[30], dni[10],apellidos[30], fecha_nacimiento[10], email_corporativo[30], domicilio[30];
			int curso, telefono, nota, equipo;
			bool lider;
};
void inicializardatos(datosAlumno &datos);

	class Alumno {
		private:
			string dni_;
			string nombre_;
			string apellidos_;
			string fechaNacimiento_;
			int telefono_;
			string email_;
			string domicilio_;
			int curso_;
			int nota_;			 
			int equipo_;		 		//		0: No tiene
			string lider_;  		//		Si/No

		public:

			Alumno(string DNI,string nomb,string apell,string fech,string email,string domic,int tlf,int cur,int nt,int equip,bool lid);
			Alumno(datosAlumno datos);
			Alumno();
			}
			
			inline string getDni(){return dni_;};
			inline void setDni(string dni){dni_=DNI;};
			
			inline string getNombre(){return nombre_;};
			inline void setNombre(string nombre){nombre_=nomb;};
			
			inline string getApellidos(){return apellidos_;};
			inline void setApellidos(string apellidos){apellidos_=apell;};
			
			inline string getFechaNacimiento(){return fechaNacimiento_;};
			inline void setFechaNacimiento(string fechaNacimiento){fechaNacimiento_=fech;};
			
			inline int getTelefono(){return telefono_;};
			inline void setTelefono(int telefono){telefono_=tlf;};
			
			inline string getEmail(){return email_;};
			inline void setEmail(string email){email_=email;};
			
			inline string getDomicilio(){return domicilio_;};
			inline void setDomicilio(string domicilio){domicilio_=domic;};
			
			inline int getCurso(){return curso_;};
			inline void setCurso(int curso){curso_=cur;};
			
			inline int getNota(){return nota_;};
			inline void setNota(int nota){nota_=nt;};
			
			inline int getEquipo(){return equipo_;};
			inline void setEquipo(int equipo){equipo_=equip;};
			
			inline string getLider(){return lider_;};
			inline void setLider(string lider){lider_=lid;};
	};

#endif

<<<<<<< HEAD
>>>>>>> 2317e816898a591f5b4cb281cf698fddecb314b2
