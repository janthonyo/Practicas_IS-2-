## Eliminar alumno

**ID:** 003

**Breve descripción:** El usuario podrá eliminar a un alumno.
 
---

**Actores principales:** Profesor. 

**Actores secundarios:** Alumno. 

---
**Precondiciones:**

 1. El alumno debe estar en la base de datos.


**Flujo principal:**

 1. El caso de uso empieza cuando el profesor desea eliminar a un alumno de la base de datos.
 2. El sistema busca al alumno por DNI o apellidos, depende de la opción que elija el profesor.
 3. Una vez escogido, vuelve a mostrar un mensaje indicando si desea eliminar este alumno(SI/NO).
 4. El alumno es eliminado del sistema.

**Postcondiciones:**

 * El sistema actualiza la base de datos.
 * El sistema muestra dicho mensaje: "Alumno eliminado".

**Flujos alternativos:**
 1. El sistema no podrá eliminar un alumno si no existe en la base de datos.
