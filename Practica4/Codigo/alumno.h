#ifndef ALUMNO_H
#define ALUMNO_H

<<<<<<< HEAD
using namespace std;

class alumno{
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
=======
	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string>
>>>>>>> 2317e816898a591f5b4cb281cf698fddecb314b2

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

<<<<<<< HEAD
	inline std::string getDni(){return dni_;};
	inline void setDni(std::string dni){dni_=dni;};

	inline std::string getNombre(){return nombre_;};
	inline void setNombre(std::string nombre){nombre_=nombre;};

	inline std::string getApellidos(){return apellidos_;};
	inline void setApellidos(std::string apellidos){apellidos_=apellidos;};

	inline std::string getFechaNacimiento(){return fechaNacimiento_;};
	inline void setFechaNacimiento(std::string fechaNacimiento){fechaNacimiento_=fechaNacimiento;};

	inline int getTelefono(){return telefono_;};
	inline void setTelefono(int telefono){telefono_=telefono;};

	inline std::string getEmail(){return email_;};
	inline void setEmail(std::string email){email_=email;};

	inline std::string getDomicilio(){return domicilio_;};
	inline void setDomicilio(std::string domicilio){domicilio_=domicilio;};

	inline int getCurso(){return curso_;};
	inline void setCurso(int curso){curso_=curso;};

	inline int getNota(){return nota_;};
	inline void setNota(int nota){nota_=nota;};

	inline int getEquipo(){return equipo_;};
	inline void setEquipo(int equipo){equipo_=equipo;};

	inline std::string getLider(){return lider_;};
	inline void setLider(std::string lider){lider_=lider;};
};
=======
>>>>>>> 2317e816898a591f5b4cb281cf698fddecb314b2
