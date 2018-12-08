#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

class alumno
{
private:
	std::string dni_;
	std::string nombre_;
	std::string apellidos_;
	std::string fechaNacimiento_;
	int telefono_;
	std::string email_;
	std::string domicilio_;
	int curso_;
	int nota_;			 
	int equipo_;		 		//		0: No tiene
	std::string lider_;  		//		Si/No

public:

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