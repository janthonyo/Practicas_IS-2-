# Extraccion de Requisitos

Documento para la extracción de requisitos.

# Descripción de problema.

	* El profesor de la asignatura de Ingeniería de Software desea gestionar los datos referentes a los alumnos del Grado de Ingeniería Informática.

	* El usuario podrá introducir los datos de un alumno de nuevo ingreso.

	* Podrá modificar los datos del alumno.

	* Podrá eliminar los datos de un alumno en concreto, así como los datos de todo el programa.

	* Podrá buscar los datos de un alumno o los de un grupo en concreto.

	* Por último, podrá visualizar los datos de todos sus alumnos.


# REQUISITOS 

*¿Qué características debe tener este sistema para satisfacer las necesidades de nuestro cliente?*

## REQUISITOS USUARIO 

	* El profesor podrá gestionar la información de sus alumnos en dicho programa.

## REQUISITOS FUNCIONALES

	* El sistema debe registrar toda la información de los alumnos.

	* El sistema permitirá al profesor: modificar, insertar y borrar cualquier dato de un alumno.

	* El sistema deberá mostrar todos los datos de uno o todos los alumnos que se encuentren registrados en la base de datos.

	* El sistema deberá destacar el grupo al que pertenece dicho alumno y el lider correspondiente.

	* El sistema permitirá hacer una copia de seguridad de los datos almacenados hasta el momento.

	* El sistema permitirá cargar la copia de seguridad.

	* El sistema podrá eliminar todos los datos de los alumnos.

	* El sistema no podrá superar los 150 alumnos registrados.

## REQUISITOS NO FUNCIONALES

	* El sistema debe visualizarse y funcionar correctamente en sistemas Linux.

	* Para la inserción de alumnos, el sistema exigirá como datos mínimos: DNI, nombre, apellidos, teléfono, mail corporativo, Dirección, curso más alto matriculado, fecha de nacimiento.

	* Para la búsqueda de alumnos, se buscará primero por el apellido y en caso de coincidencia se buscará por su DNI.

	* Para mostrar los alumnnos el sistema pedirá tipo de orden en el que desean ser mostrados.

	* Al borrar al alumno líder de un grupo, el sistema podrá dejar a dicho grupo sin líder.

	* Para eliminar a un alumno, el sistema lo buscará por su apellido asegurando por su DNI en caso de coincidencia.

