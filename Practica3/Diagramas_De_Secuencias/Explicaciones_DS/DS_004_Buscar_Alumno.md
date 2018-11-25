## DS 004: Buscar alumno

 * Comienza cuando se le pide al sistema que realice la búsqueda de un alumno. Comprueba que existan alumnos en la base de datos. Se inicia un bloque ALT.

 * Si existen alumnos en la base de datos, se procede a la búsqueda del alumno, iniciándose un nuevo bloque ALT.

   * Búsqueda por DNI.

   * Búsqueda por apellidos. Si encuentra varios alumnos con el mismo apellido se abre un nuevo bloque ALT en el que se iniciará una nueva búsqueda por DNI.

   * Si se encuentra el alumno, lo devuelve.

   * Si no se encuentra, devuelve un error.

 * Si la base de datos se encuentra vacía, devuelve un error.

