# Tutorial de Git

---

## Jose Antonio Martinez Molina

### Configuración básica

1. Nombre del administrador

~~~
git config --global user.name "Fulano Pepito Palotes"
~~~

2. Correo electrónico

~~~
git config --global user.email fpepito@uco.es
~~~

3. Editor de texto

~~~
git config --global core.editor "gedit"
~~~

4. Color de la interfaz

~~~
git config --global color.ui true
~~~

5. Listado de la configuración

~~~
git config --list
~~~

---

### Comandos básicos

6. Iniciar repositorio en un nuevo directorio

~~~
git init
~~~

7. Agregar cambios al area de *staging*

~~~
git add
~~~

8. Validar cambios en el repositorio

~~~
git commit -m "Realizado cambios en ..."
~~~

9. Hacer los dos pasos anteriores en uno

~~~
git commit -am "Realizado cambios en ..."
~~~

10. Historial de commits

~~~
git log
~~~

11. Ayuda del listado anterior

~~~
git help log
~~~

12. Listar los 5 commits mas recientes

~~~
git log -n 5
~~~

13. Listar los commits desde una fecha:

~~~
git log --since=2018-09-18
~~~

14. Listar los commits por autor

~~~
git log --author="Jose Antonio"
~~~

15. Ver cambios en el directorio

~~~
git status
~~~

16. Ver diferencias entre ficheros en el directorio y el repositorio de Git

~~~
git diff
~~~

17. Ver diferencia entre ficheros en el *staging* y el repositorio

~~~
git diff --staged
~~~

18. Eliminar archivos

~~~
git rm archivo
git commit -m "Archivo ..... eliminado"
~~~

19. Mover o renombrar archivos

~~~
git mv antiguo nuevo
git commit -m "Archivo .... movido/renombrado a ..."
~~~

20. Deshacer cambios con git

~~~
git checkout -- nombre_fichero
~~~

21. Retirar archivos del *staging*

~~~
git reset HEAD nombre_fichero
~~~

---


