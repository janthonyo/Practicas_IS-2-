## DS 002: Modificar Alumno

Comienza cuando el profesor solicita modificar los datos de un alumno. La interfaz pregunta que opción de búsqueda desea ejecutar y el profesor la indica, luego pide los datos del alumno al usuario, y los envía a la base de datos que procede a su búsqueda. Se inicia un bloque ALT.

 * Si el alumno ha sido encontrado, se le pide al profesor que modifique los datos que considere oportunos. Si se modifican datos opcionales, relacionados con la gestión de líderes, entraríamos en un bloque OPT con un bloque ALT dentro de este.

 * Se comprobará que las modificaciones son válidas con un bloque ALT.
 *   Si son válidas, se procede a modificar los datos en la base de datos, y se devuelve un mensaje de confirmacion.
 *   Si no son válidas, devuelve un mensaje de error y continua en el bucle hasta que se corrija la validez de las modificaciones.

 * Si el alumno no ha sido encontrado, devuelve un mensaje de error indicando que no se ha encontrado el alumno.

