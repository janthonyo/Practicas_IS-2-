## DS 005: Mostrar Alumno

Comienza cuando el profesor solicita mostrar un alumno, para lo cual la interfaz pregunta que opción de mostrado va a elegir, y el usuario si desea ver un alumno , varios o todos.

 * Si se elige mostrar un alumno, se piden al usuario los datos del alumno, y estos se envian a la base de datos, que procede a buscarlo. Se inicia otro bloque **ALT**.

 *  Si se encuentra el alumno, devuelve sus datos y lo muestra al profesor.
 *  Si no existe, se devuelve un mensaje de error de alumno no encontrado.
 *  Si se elige mostrar varios alumnos, la interfaz pide los los apellidos de dichos alumnos, se envian a la base de datos, este lo comprueba y muestra los alumnos por pantalla.
 * Si se elige mostrar a todos los alumnos, la base de datos comprueba que existan alumnos, inicando un bloque **ALT**.
 *  Si hay alumnos en la base de datos, devuelve los datos y se los muestra por pantalla.
 *  Si la base de datos está vacía, devulve un mensaje de error indicando que la base de datos está vacía.


