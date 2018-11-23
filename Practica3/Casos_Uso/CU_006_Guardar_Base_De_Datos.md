## Guardar Base de Datos

**ID:** 007

**Breve descripción:** El sistema crea una copia de los datos de los alumnos hasta la fecha.
 
---

**Actores principales:** Profesor. 

**Actores secundarios:** Alumno. 

---
**Precondiciones:**

 * La Base de Datos tiene que contener los datos de, al menos, un alumno para realizar la copia.


**Flujo principal:**

 1. El caso de uso empieza cuando el sistema necesita hacer una copia de seguridad (guardar la Base de Datos actual).
 2. El sistema indicara la fecha de creacion de la ultima copia y preguntara si desea guardarse.
 3. El sistema recoge los datos de los alumnos.

**Postcondiciones:**

 * El sistema crea un fichero binario con la copia de los datos del sistema.
 * El sistema muestra un mensaje diciendo si la copia ha sido realizada correctamente

**Flujos alternativos:**

 2.a. Si no se ha realizado aun ninguna copia, el sistema mostrara la fecha de la ultima copia realizada como "-----".

 2.b. Si el usuario no quiere hacer un guardado, el sistema volvera al menú inicial.

 3.a. Si la Base de Datos esta vacia, el sistema mostrara un mensaje diciendo que la BD esta vacia y no se puede realizar la copia.

 3.b. Si ya existe una copia anterior, el sistema preguntara si quiere sobreescribirse la copia anterior.

 3.b.a. Si el usuario decide sobreescribir la copia, el sistema guardara la copia nueva poniendo la fecha de creado en su nombre y borrara la anterior.

 3.b.b. Si el usuario decide no sobreescribir la copia, el sistema guardara la copia poniendo la fecha de creado en su nombre.
