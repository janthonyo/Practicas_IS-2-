## Modificar alumno

**ID:** 002 

**Breve descripción:** El usuario podrá modificar los datos del alumno.
 
---

**Actores principales:** Profesor. 

**Actores secundarios:** Alumno. 

---
**Precondiciones:**

 1. El alumno debe estar en la base de datos.


**Flujo principal:**

 1. El caso de uso empieza cuando el profesor desea modificar los datos de un alumno.
 2. El sistema muestra un mensaje para ver como se desea buscar al alumno: si por DNI o por apellido.
 3. El sistema busca al alumno por la opción escogida anteriormente.
 4. El sistema mostrará los datos del alumno y de nuevo mostrará un mensaje dando las opciones que desea modificar.
 5. Si se modifica el campo de líder, el sistema hará una comprobación; en caso de que no tenga, mostrará un mensaje informando de que dicho grupo no posee líder,y si lo posee el programa mostrará el nombre y apellidos del alumno que es líder del grupo.

**Postcondiciones:**

 * El sistema actualiza la base de datos.
 * El sistema muestra dicho mensaje: "Modificación aceptada".

**Flujos alternativos:**
 1. El sistema no podrá modificar alumnos que no se encuentren en la base de datos.
 2. Como mínimo se deben introducir los campos obligatorios, de no ser así, el sistema mostrará un mensaje indicando que no la modificación no ha sido aceptada.
