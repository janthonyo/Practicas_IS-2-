# DS 006: Guardar Base de Datos

Comienza cuando el profesor elige la opcion de Guardar Base de Datos. El sistema muestra la fecha de la ultima copia y pregunta al usuario si desea hacer el guardado.

En este momento entramos en un bloque **ALT**:

 * Si el profesor coordinador **no quiere realizar el guardado**, el sistema detiene la operacion y sale al menu principal.

 * Si el prrofesor coordinador **quiere realizar el guardado**, el sistema empieza a sacar los datos de los alumnos de la Base de Datos. Entramos en un bloque **ALT**:

   * Si la **BD esta vacía**, el sistema muestra un mensaje de error.

   * Si la **BD contiene datos**, el sistema preguntará al usuario que quiere hacer con la copia anterior, si la hay. Entramos en un bloque **ALT**:

     * Si el usuario elige **sobreescribir**, el sistema borrará la ultima copia y guardará la copia actual.

     * Si el usuario elige **mantenerla**, el sistema guardara la copia actual sin más.

   * El sistema mostrará un mensaje indicando que el guardado se ha realizado con éxito, si todo ha ido bien.
