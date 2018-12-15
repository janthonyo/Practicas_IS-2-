#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "bd.h"
#include "alumno.h"

bool introducirAlumno(Alumno newAlumno){

  if(numero_alumnos_>150)
  {
    cout<<"Base de datos llena"<<endl;
    return false;
  }
  else cout << "Numero Alumnos :: " << numero_alumnos_<< endl;

  string dni="";
  string nombre="";
  string apellidos="";
  string fechaNacimiento="";
  string email="";
  int telefono="";
  string domicilio="";
  int curso="";
  int nota="";
  string lider="";
  int equipo="";
do {
  cout<<"Introduce DNI:"<<endl;
  cin>> dni;
  dni_=dni;
  cout<<"Introduce el nombre:"<<endl;
  cin>>nombre;
  nombre_=nombre;
  cout<<"Introduce los apellidos"<<endl;
  apellidos_=apellidos;
  cout<<"Introuce la fecha de nacimiento"<<endl;
  fechaNacimiento_=fechaNacimiento;
  cout<<"Introduce el email:"<<endl;
  email_=email;
  cout<<"Introduce el telefono:"<<endl;
  telefono_=telefono;
  cout<<"Introduce el domicilio:"<<endl;
  domicilio_=domicilio;
  cout<<"Introduce el curso:"<<endl;
  curso_=curso;
  cout<<"Introduce si es lider:"<<endl;
  curso_=curso;
  cout<<"Introduce el equipo:"<<endl;
  equipo_=equipo;
  cout<<"Introduce la nota:"<<endl;
  nota_=nota;
  if(dni==""||nombre==""||apellidos=="")
  {
    cout<<"Vuelva a introducir los datos obligatorios(dni,nombre,apellidos)";
  }
} while(dni==""||nombre==""||apellidos=="");

if(buscarAlumno(newAlumno)==false)
{
  alumnos_.push_back(newAlumno);
numero_alumnos_++;
}
else
{
  
}
//Hablar con manu sobre la funcion buscar alumno//
//Preguntar sobre el numero máximo de personas por grupo


}
