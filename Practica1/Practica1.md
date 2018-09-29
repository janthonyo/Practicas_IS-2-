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

## Antonio Jose Sanchez Moscoso

22. Complementar ultimo commit

~~~
git commit --amend -m "Mensaje"
~~~

23. Recuperar version de un fichero de commit antigo

~~~
git checkout <id_commit> --nombre_archivo
~~~
24. Revertir un commit

~~~
git revert <id_commit>
~~~

25. Deshacer multiples cambios en el repositorio

~~~
git reset --soft <id_commit>
git reset --mixed <id_commit>
git reset --hard <id_commit>
~~~


26. Listar archivos que git no controla

~~~
git clean -n
~~~

27. Eliminar archivos que git no controla

~~~
git clean -n
~~~

28. Listar el contenido del repositorio de git

~~~
git ls-tree master
git ls-tree master ^^^
git ls-tree master ^3
~~~

29. Log en una linea

~~~
git log --oneline
~~~

30. Log con los 3 ultimos commits en una linea

~~~
git log --oneline -3
~~~

31. Examinar el contenido de un commit

~~~
git show <id>
~~~

32. Comparar un commit con el actual

~~~
git diff <id> nombre_archivo
~~~

33. Comparar dos commits

~~~
git diff if..id nombre archivo
~~~

34. Ver listado de ramas

~~~
*git branch*
~~~

35. Crear una rama

~~~
git branch nombre_rama
~~~

36. Cambiarnos a una rama

~~~
git checkout nombre_rama
~~~

37. Crear una rama y moverse en un paso

~~~
git checkout -b nombre_rama
~~~

38. Comparar ramas

~~~
git diff nombre_rama..nombre_rama
~~~

39. Ver ramas identicas a la actual

~~~
git branch --merged
~~~

40. Renombrar ramas

~~~
git branch -m nombre_antiguo nombre_nuevo
~~~

41. Eliminar ramas

~~~
git branch -d nombre_rama
git branch -D nombre_rama
~~~

42. Integrar ramas a la actual

~~~
git merge nombre_rama
~~~

43. **Resolver conflictos (se suele hacer manualmente)**

~~~
git merge --abort
~~~

## Manuel Jesus Mariscal Romero

### Comandos de ramas III

44. Almacenar cambios temporales

~~~
git stash save "Mensaje"
~~~

45. Listar cambios

~~~
git stash list
~~~

46. Ver contenido de un cambio temporal

~~~
git stash show -p nombre_stash
~~~

47. Eliminar un cambio temporal

~~~
git stash drop nombre_stash
~~~

48. Aplicar cambio del stash

~~~
git stash apply nombre_stash
git stash pop nombre_stash
~~~

---

### Comandos Github I

49. Añadir repositorio remoro

~~~
git remote add origin url
~~~

50. Ver repositorios remotos

~~~
git remote -v
~~~

51. Eliminar repositorio remoto

~~~
git remote rm origin
~~~

52. Añadir cambios del repositorio local al remoto

~~~
gil push -u origin master
~~~

53. Añadir cambios del repositorio remoto al local 

~~~
git pull origin master
~~~

---

### Comandos Github II

54. Ver branches remotos

~~~
git branch -r
~~~

55. Ver todos los branches

~~~
git branch -a
~~~

56. Clonar un repositorio remoto

~~~
git clone url
~~~

#### Dar seguimiento a branches remotos

57. Listar los commits por autor

~~~
git log --author="Jose Antonio"
~~~

58. Ver cambios en el directorio

~~~
git status
~~~

59. Ver diferencias entre ficheros en el directorio y el repositorio de Git

~~~
git diff
~~~

60. Ver diferencia entre ficheros en el *staging* y el repositorio

~~~
git diff --staged
~~~

61. Eliminar archivos

~~~
git rm archivo
git commit -m "Archivo ..... eliminado"
~~~

62. Mover o renombrar archivos

~~~
git mv antiguo nuevo
git commit -m "Archivo .... movido/renombrado a ..."
~~~