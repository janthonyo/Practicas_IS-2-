## Buscar alumno

**ID:** 004 

**Breve descripción:** El usuario podrá buscar a un alumno por su DNI o apellidos.
 
---

**Actores principales:** Profesor. 

**Actores secundarios:** Alumno. 

---
**Precondiciones:**

 1. El alumno debe estar en la base de datos.


**Flujo principal:**

 1. El caso de uso empieza cuando el profesor desea buscar un alumno.
 2. El sistema muestra la opcíon de buscar alumno por DNI o apellidos.
 3. El sistema procede a buscar el alumno por DNI o apellidos.

**Postcondiciones:**

 * El sistema actualiza la base de datos.
 * El sistema muestra dicho mensaje: "Modificación aceptada".

**Flujos alternativos:**
 1. Si no existen alumnos en la base de datos, se mostrará un mensaje indicando al profesor que cargue la base de datos.
 1.1 Si la base de datos no contiene alumnos, mostrará un mensaje indicando que en la base de datos no existen alumnos registrados.
 2. Si existe más de un alumno con el mismo apellido, el sistema pedirá al profesor que indique el DNI de dicho alumno.
