## Buscar alumno

**ID**: 005
**Breve descripción**: El sistema muestra todos los alumnos.

---

**Actores principales**: Profesor.

**Actores secundarios**: Alumno.

---

**Precondiciones:**

1. Debe existir una base de datos, o en caso de que exista mas de una, debe seleccionarse una.


**Flujo principal:**

1. El caso de uso empieza cuando el sistema necesita mostrar todos los alumnos.
2. El sistema recoge los datos de todos los alumnos, indicando su grupo y señalando al lider.

**Postcondiciones:**

* El sistema muestra una lista de alumnos por pantalla.

**Flujos alternativos:**

2. a. Si la base de datos esta vacía, o no se ha seleccionado una, se mostrará un error por pantalla.
