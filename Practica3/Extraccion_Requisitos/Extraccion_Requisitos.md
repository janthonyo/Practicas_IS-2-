# Extraccion de Requisitos

Documento para la extracción de requisitos.

#### ÍNDICE

 * Descripción de problema
 * Partes Interesadas
 * Datos a almacenar
 * Requisitos:

  * Requisitos Funcionales
  * Requisitos No Funcionales
  * Priorización de Requisitos

# Descripción de problema.

 * El profesor de la asignatura de Ingeniería de Software desea gestionar los datos referentes a los alumnos del Grado de Ingeniería Informática.

 * El usuario podrá introducir los datos de un alumno de nuevo ingreso.

 * Podrá modificar los datos del alumno.

 * Podrá eliminar los datos de un alumno en concreto, así como los datos de todo el programa.

 * Podrá buscar los datos de un alumno o los de un grupo en concreto.

 * Por último, podrá visualizar los datos de todos sus alumnos.

## Partes Interesadas

**Alumnos**: Cursan la asignatura impartida un profesor.

**Profesores**: Existen los coordinadores y los ayudantes, ambos gestionan la base de datos de los alumnos,sin embargo, el coordinador además puede realizar copias de seguridad externa.

## Datos a almacenar

Los datos que se guardarán serán: 

* DNI
* Nombre
* Apellidos
* Teléfono
* Mail corporativo
* Dirección
* Fecha de nacimiento
* Nota
* Curso más alto en el que está matriculado
* Número del grupo en el que participa
* ¿Es el líder de su grupo? (Si/No)

*Estos dos últimos serán opcionales.*


# REQUISITOS 

*¿Qué características debe tener este sistema para satisfacer las necesidades de nuestro cliente?*


## REQUISITOS FUNCIONALES

 * **ID: 000. Log In**: El sistema permitirá unicamente el acceso a la aplicación a aquellos profesores.

 * **ID: 001. Introducir Alumno:** El sistema permitirá insertar los datos de un alumno de nuevo ingreso.

 * **ID: 002. Modificar Alumno:** El sistema permitirá al profesor modificar cualquier dato de un alumno.

 * **ID: 003. Eliminar alumno:** El sistema permitirá al profesor borrar a un alumno existente en el sistema.

 * **ID: 004. Buscar alumno:** El sistema buscara los datos de uno o varios alumnos y los mostrará. Se buscará primero por su apellido y, en caso de coincidencia, se buscará por su DNI.

 * **ID: 005. Mostrar alumno:** El sistema pedirá el tipo de orden en el que desean ser mostrados. Podran mostrarse los datos de uno, varios o todos los alumnos existentes en el sistema.

 * **ID: 006. Guardar Base de Datos:** El sistema permitirá hacer una copia de seguridad de los datos almacenados hasta el momento.

 * **ID: 007. Cargar Base de Datos:** El sistema permitirá cargar la copia de seguridad.

 * **ID: 008. Guardar copia de seguridad externa:** El sistema nos permitirá guardar una copia en un servidor externo.

 * **ID: 009. Cargar copia de seguridad externa:** El sistema dará la opción de poder cargar dicha copia.


## REQUISITOS NO FUNCIONALES

 * El sistema no podrá superar los 150 alumnos registrados.

 * El sistema debe visualizarse y funcionar correctamente en sistemas Linux.

 * El lenguaje de programación será C++ y se empleará el lenguaje Markdown para documentarlo.

 * El sistema almacenará la infórmación en ficheros binarios.

 * El programa será mostrado y utilizado a través de línea de comandos.

 * Solo podrá ser empleado por aquellos profesores que figuren en las credenciales cedidas por la Universidad, teniendo que introducir su usuario y contraseña y rol para acceder.

 * El programa tendrá funcionalidad durante un curso, siendo borrados los datos almacenados al año siguiente.


## Priorización de requisitos

* **ID: 000. Log In**: **'1'**
* **ID: 001. Introducir Alumno**: **'1'**
* **ID: 002. Modificar Alumno**: **'4'**
* **ID: 003. Eliminar Alumno**: **'4'**
* **ID: 004. Buscar Alumno**: **'1'**
* **ID: 005. Mostrar Alumno**: **'3'**
* **ID: 006. Guardar Base de Datos**: **'2'**
* **ID: 007. Cargar Base de Datos**: **'2'**
* **ID: 008. Guardar Copia de Seguridad Externa**: **'2'**
* **ID: 009. Cargar Copia de Seguridad Externa**: **'2'**



