## Cargar base de datos

**ID:** 007

**Breve descripción:** El sistema carga una copia de la base de datos.
 
---

**Actores principales:** Profesor. 

**Actores secundarios:** Alumno. 

---
**Precondiciones:**

 1. Debe haber, al menos, una copia de seguridad hecha.


**Flujo principal:**

 1. El caso de uso empieza cuando el sistema necesita cargar una copia de seguridad.

 2. El sistema preguntara al usuario el nombre de la base de datos que se desea cargar.

 3. El sistema abre el fichero que contiene los datos de la copia de seguridad.

**Postcondiciones:**

 * El sistema borra los datos actuales del sistema y carga los datos guardados en la copia de seguridad. 
 
 * El sistema indicará si la base de datos ha sido cargada con éxito.

**Flujos alternativos:**

 2.a. Si la copia de seguridad no existe, el sistema muestra un mensaje de error.

 3.a. Si se produjera algun error durante la carga, el sistema mostraría un mensaje de error.

