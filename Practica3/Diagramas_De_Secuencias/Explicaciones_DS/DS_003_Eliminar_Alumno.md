##DS 003: Eliminar alumno

 * Comienza cuando el profesor solicita eliminar un alumno. La interfaz pide al usuario los datos obligatorios (DNI o apellidos). La interfaz los recibe y envía a la base de datos. Con estos, la base de datos puede buscar al alummo que concuerde con los datos. Se inicia un bloque ALT con dos líneas de acción, dependiendo de si existe el alumno:

 *   Si el alumno no existe en la base de datos, devuelve un mensaje de error indicándoselo al usuario.
 *   Si el alumno existe en la base de datos, se procede a su eliminación, y se confirma al usuario que la operación se ha realizado con éxito.

