# DS 001: Introducir Alumno

Empieza cuando el profesor elige la opción de introducir alumno.

El sistema comprueba si la base de datos esta llena o no. Entramos en un bloque **ALT**:
 
 * Si la **BD esta llena**, el sistema mostrará un mensaje de error diciendo que no se pueden introducir más alumnos.

 * Si la **BD no esta llena**, el sistema pedirá al usuario que introduzca los datos de los alumnos.
 
   * En este punto, se nos abre un bloque **OPT** en el que el usuario puede introducir datos que no sean obligatorios sobre el alumno.

 * El sistema comprobara los datos introducidos. Entramos en un bloque **ALT**:

   * Si algun **dato obligatorio no ha sido introducido**, el sistema mostrará un mensaje de error.

   * Si los **datos obligatorios han sido introducidos**, el sistema busca al alumno. Entramos en un bloque **ALT**:

     * Si el **alumno existe en la BD**, el sistema muestra un mensaje de error diciendo que el alumno ya estaba.

     * Si el **alumno es nuevo**, podemos entrar en un bloque **OPT**:

       * Si se ha especificado un grupo para el alumno, entramos en un bloque **ALT**:

         * Si el **grupo esta lleno**, el sistema muestra un mensaje de error de que el grupo asignado esta completo.

         * Si el **grupo no esta lleno**, podemos entrar en un bloque **OPT**:

           * Si se ha especificado como lider a ese alumno, entramos en bloque **ALT**:

             * Si el grupo **tiene lider**, el sistema muestra un mensaje de error diciendo que ese grupo ya tiene un lider.

     * El sistema añade al alumno a la BD y muestra un mensaje diciendo si ha habido éxito.




