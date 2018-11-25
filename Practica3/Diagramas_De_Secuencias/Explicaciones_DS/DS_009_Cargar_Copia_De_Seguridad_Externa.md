# DS 008: Cargar copia de seguridad externa

Comienza cuando se pide a la aplicación que cargue una copia de seguridad externa.

El sistema pide el nombre de la copia que queremos cargar. Aquí entramos en un bloque **ALT**:

 * Si el sistema *no encuentra* la copia, muestra un mensaje de error y termina.

 * Si el sistema *sí encuentra* la copia, la descarga desde el servidor, borra los datos actuales y carga los nuevos en la base de datos. Finalmente muestra un mensaje de éxito.
