## Guardar copìa de seguridad externa

**ID:** 008 

**Breve descripción:** El usuario podrá guardar una copia de seguridad externa.
 
---

**Actores principales:** Profesor. 

**Actores secundarios:** Alumno. 

---
**Precondiciones:**

 1. La copia de seguridad a guardar debe haber sido previamente creada.

**Flujo principal:**

 1. El caso de uso empieza cuando el profesor necesita guardar una copia de seguridad.
 2. El sistema indica un mensaje de si desea guardar la la copia de seguridad.
 3. El sistema guarda la copia de seguridad.
 4. El sistema comprueba que se ha guardado correctamente.

**Postcondiciones:**

 * El sistema muestra un mensaje de confirmación de que la copia de seguridad ha sido guardada correctamente.
 * El sistema pregunta el usuario si desea sobrescribir la copia de seguridad o de lo contrario si desea crear una nueva copia de seguridad.

**Flujos alternativos:**
 1. Si aún no se ha realizado ninguna copia de seguridad, el sistema mostrará la fecha de la última copia realizada como "------"
 2. Si el usuario no desea guardar la copia , el sistema lo redirecciona al menú.
