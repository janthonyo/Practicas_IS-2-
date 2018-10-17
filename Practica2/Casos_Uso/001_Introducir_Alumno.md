## Introducir alumno

**ID:** 001 

**Breve descripción:** El usuario debe introducir los datos del alumno de nuevo ingreso.
 
---

**Actores principales:** Profesor. 

**Actores secundarios:** Alumno. 

---
**Precondiciones:**

 1. El alumno debe existir en el sistema


**Flujo principal:**

 1. El caso de uso empieza cuando nos pide los datos del nuevo alumno.
 2. El sistema guarda los datos del alumno.

**Postcondiciones:**

 * El sistema debe tener registrados al menos el DNI, nombre, apellidos,dirección y fecha naicimiento del nuevo alumno.

**Flujos alternativos:**

 2.a. Si no recogen los datos obligatorios, el alumno no será incorporado en la base de datos.
