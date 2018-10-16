## Cargar copia

**ID:** 008

**Breve descripción:** El sistema carga una copia de seguridad.
 
---

**Actores principales:** Profesor. 

**Actores secundarios:** Alumno. 

---
**Precondiciones:**

 1. Debe haber, al menos, una copia de seguridad hecha


**Flujo principal:**

 1. El caso de uso empieza cuando el sistema necesita cargar una copia de seguridad
 2. El sistema abre el fichero que contiene los datos de la copia de seguridad

**Postcondiciones:**

 * El sistema borra los datos actuales del sistema y carga los datos guardados en la copia de seguridad. 

**Flujos alternativos:**

 2.a. Si la copia de seguridad no existe, el sistema muestra un mensaje de error.
