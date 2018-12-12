#ifndef ALUMNO_H
#define ALUMNO_H

	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string>

	using namespace std;

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

			Alumno(string dni, string nombre, string apellidos, string fechaNacimiento, int telefono, string email, string domicilio, int curso, int nota, int equipo = 0, string lider = "no") {
				dni_ = dni;
				nombre_ = nombre;
				apellidos_ = apellidos;
				fechaNacimiento_ = fechaNacimiento;
				telefono_ = telefono;
				email_ = email;
				domicilio_ = domicilio;
				curso_ = curso;
				nota_ = nota;
				equipo_ = equipo;
				lider_ = lider;
			}
			
			inline string getDni(){return dni_;};
			inline void setDni(string dni){dni_=dni;};
			
			inline string getNombre(){return nombre_;};
			inline void setNombre(string nombre){nombre_=nombre;};
			
			inline string getApellidos(){return apellidos_;};
			inline void setApellidos(string apellidos){apellidos_=apellidos;};
			
			inline string getFechaNacimiento(){return fechaNacimiento_;};
			inline void setFechaNacimiento(string fechaNacimiento){fechaNacimiento_=fechaNacimiento;};
			
			inline int getTelefono(){return telefono_;};
			inline void setTelefono(int telefono){telefono_=telefono;};
			
			inline string getEmail(){return email_;};
			inline void setEmail(string email){email_=email;};
			
			inline string getDomicilio(){return domicilio_;};
			inline void setDomicilio(string domicilio){domicilio_=domicilio;};
			
			inline int getCurso(){return curso_;};
			inline void setCurso(int curso){curso_=curso;};
			
			inline int getNota(){return nota_;};
			inline void setNota(int nota){nota_=nota;};
			
			inline int getEquipo(){return equipo_;};
			inline void setEquipo(int equipo){equipo_=equipo;};
			
			inline string getLider(){return lider_;};
			inline void setLider(string lider){lider_=lider;};
	};

#endif

