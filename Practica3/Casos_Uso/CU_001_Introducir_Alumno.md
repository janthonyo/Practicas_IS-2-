## Introducir alumno

**ID:** 001 

**Breve descripción:** El usuario debe introducir los datos del alumno de nuevo ingreso.
 
---

**Actores principales:** Profesor. 

**Actores secundarios:** Alumno. 

---
**Precondiciones:**

 1. El alumno debe estar matriculado en el centro.
 2. El numero de alumnos será inferior a 150.


**Flujo principal:**

 1. El caso de uso empieza cuando nos pide los datos del nuevo alumno.
 2. El sistema comprueba el numero de alumnos que hay en la base de datos.
 3. El sistema almacena los datos obligatorios del alumno y los no obligatorios que el profesor desee introducir.
 3.1 Los datos obligatorios que deben aparecer para el nuevo alumno introducido, serán el DNI, nombre y apellidos.
 4. El sistema comprueba si el grupo del nuevo alumno posee ya líder.
 5. El sistema introduce al alumno.
 6. El sistema comprueba que se ha introducido correctamente.

**Postcondiciones:**

 * El sistema muestra un mensaje con los datos obligatorios del nuevo alumno.
 * Actualización de la base de datos.

**Flujos alternativos:**
 1. En el sistema debe de haber menos de 150 alumnos, de lo contrario mostrará un mensaje de error al introducir el nuevo alumno.
 2. Si no recogen los datos obligatorios, el alumno no será incorporado en la base de datos.
 3. Por defecto,el campo lider tendrá el valor NULL.
 3.1 Si se introduce el campo líder, oblihatoriamente habrá que indicar al grupo al que pertenece.

 3.2 El sistema no permitirá indicar al nuevo alumno la opicón de líder en el grupo que haya indicado, si éste ya posee un líder.
