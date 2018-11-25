# DS 008: Guardar copia de seguridad externa

Comienza cuando se pide a la aplicación que cree una copia de seguridad externa.

El sistema muestra la fecha de la última copia de seguridad y pregunta al usuario si quiere continuar con la copia. Aquí entramos en un bloque **ALT**:

 * Si indica *no*, la copia termina y vuelve a mostrar el menú.

 * Si indica *sí*, el sistema entra en un bloque **LOOP** y para obtener todos los datos de la base de datos. Ahora entra en otro bloque **ALT**:

   * Si la base de datos está vacía, muestra un mensaje de error y termina.
 
   * En caso de encontrar datos el sistema entra en un bloque **ALT** y mostrará un mensaje de éxito antes de finalizar:

    * Sobreescribir la última copia: el sistema borra la última copia, guarga la nueva y la envía al servidor.

    * Mantener la última copia: El sistema guarda la última copia y la envía al servidor.
