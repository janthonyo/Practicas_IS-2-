## Mostrar alumno/s

**ID**: 005
**Breve descripción**: El sistema busca uno, varios o todos los alumos de la Base de Datos y muestra sus datos.

---

**Actores principales**: Profesor.

**Actores secundarios**: Alumno.

---

**Precondiciones:**

1. Los alumnos deben existir en la Base de Datos.


**Flujo principal:**

1. El caso de uso empieza cuando el profesor desea mostrar los datos de uno, varios o todos los alumnos.
2. El sistema preguntara como quieren mostrarse (buscar al alumno o mostrar a todos)
3. El sistema recogera los datos de el/los alumno/s especificados.
4. El sistema preguntara en que orden quieren ser mostrados los datos.


**Postcondiciones:**

* El sistema mostrará por pantalla los datos obtenidos.

**Flujos alternativos:**

2. Si el usuario elige buscar al alumno, el sistema preguntara por el apellido de dicho alumno.

2.1. El sistema preguntara al usuario si quiere concretar que alumno es el buscado introduciendo su DNI, en caso de haber coincidencia.

2.1.a. Si el usuario decide especificar al alumno, el sistema pedira el DNI del alumno buscado.

2.1.b. Si el usuario decide no concretar al alumno, el sistema buscara aquellos alumnos con el apellido buscado.

4.a. Si decide mostrarse de manera ascendente, el sistema pedira en base a que atributo sera ordenado.

4.b. Si decide mostrarse de manera descendente, el sistema pedira en base a que atributo sera ordenado.






