## Cargar copia de seguridad externa
**ID:** 009

**Breve descripción:** El usuario podrá cargar una copia de seguridad externa.
 
---

**Actores principales:** Profesor. 

**Actores secundarios:** Alumno. 

---
**Precondiciones:**

 1. La copia de seguridad debe haber sido previamente guardada.


**Flujo principal:**

 1. El caso de uso empieza cuando el profesor desea cargar una copia de seguridad.
 2. El sistema muestra la opción al usuario de que copia de seguridad desea cargar.
 3. El sistema carga la copia de seguridad.
 4. El sistema comprueba que se ha cargado correctamente.

**Postcondiciones:**

 * El sistema muestra un mensaje de confirmación de que la carga se ha realizado correctamente.
 * El sistema permite sobrescribir los datos de la base de datos.
**Flujos alternativos:**
 1. Si no hay copias de seguridad guardadas, el sistema mostrará un mensaje de error, donde indicará al usuario que cree una copia de seguridad para poder cargarla.
 2. Si el sistema no puede cargar la base de datos, mostrará un mensaje de error, indicando  que no ha sido posible cargar la copia.
