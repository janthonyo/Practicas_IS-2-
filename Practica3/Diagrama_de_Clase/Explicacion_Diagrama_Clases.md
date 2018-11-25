# Explicación del Diagrama de Clases

Este fichero contiene la explicación del Diagrama de Clases realizado.

## Indice

En este documento podemos encontrar las siguientes partes:

 * Clases
   * Clase Profesor
   * Clase Alumno
   * Clase BD
 * Relaciones entre clases


## Clases

En este diagrama vamos a poder encontrar las siguientes clases:

 * Profesor
 * Alumno
 * Base de datos


## Clase Profesor

En esta clase vamos a poder encontrar las siguientes claves privadas y públicas:

 * **Claves privadas**:

   * usuario
   * ficheroBD

 * **Claves publicas**:

   * login
   * register
   * getUsuario
   * setUsuario
   * guardarBD
   * cargarBD

## Clase Alumno

En esta clase vamos a poder encontrar las siguientes claves privadas y públicas:

 * **Claves privadas**:

   * dni
   * nombre
   * apellidos
   * fecha_nacimiento
   * teléfono
   * email
   * domicilio
   * curso
   * nota
   * equipo
   * líder

 * **Claves publicas**:

 * *Distinguiremos entre observadores (get), que mostraran el valor de una variable en un momento, y modificadores (set), que modificaran el valor de la variable*

   * get/setDni
   * get/setNombre
   * get/setApellidos
   * get/setFecha_Nacimiento
   * get/setTelefono
   * get/setEmail
   * get/setDomicilio
   * get/setCurso
   * get/setNota
   * get/setEquipo

## Clase BD (Base de Datos)

En esta clase vamos a poder encontrar las siguientes claves privadas y públicas:

 * **Claves privadas**:

   * listaAlumnos
   * nombreFichero

 * **Claves publicas**:

   * introducirAlumno
   * modificarAlumno
   * eliminarAlumno
   * buscarAlumno
   * getAlumnos
   * setAlumnos
   * getNombre
   * setNombre

## Relaciones entre clases

Podemos encontrar las siguentes relaciones:

 * Relación BD-Profesor: 
 * Relacion BD-Alumno:


