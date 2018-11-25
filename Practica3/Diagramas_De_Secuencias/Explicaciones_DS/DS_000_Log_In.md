# DS 000: Log In

Comienza cuando se abre la aplicacion. El sistema pide al usuario que introduzca su usuario. Seguidamente, se le pide la contraseña.

El sistema comprueba si los datos son correctos. Aqui entramos en un bloque **ALT**:

 * Si los datos son *incorrectos*, entramos en un boque **LOOP**:

   * El sistema muestra un mensaje de error. A continuacion, vuelve a pedir el usuario y la contraseña y vuelve a verificar los datos.

   * El bucle continuara hasta que los datos introducidos sean *Correctos*.

 * Si los datos son *correctos*, el sistema comprueba si el usuario esta identificado como profesor coordinador o como ayudante. Entramos en un bloque **ALT**:

   * Si esta identificado como **Coordinador**, el sistema mostrará el menú con todas las opciones.
 
   * Si esta identificado como **Ayudante**, el sistema mostrará el menú con las opciones permitidas a los ayudantes (todas excepto las relacionadas con las operaciones de Copias de Seguridad).


