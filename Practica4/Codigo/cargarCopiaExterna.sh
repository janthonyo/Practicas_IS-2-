#!/bin/bash

pwd=`pwd`"/"
dir="/tmp/copia_externa/"
init=".git/"
git="https://github.com/"
bd=$1".txt"

if [ ! -d $dir ];then
	echo "El directorio " $dir " no existe"
	echo "Creando " $dir "..."
	mkdir $dir
fi

cd $dir

if [ ! -d $init ];then
	# inicializando repositorio local
	echo "El directorio " $dir " no esta inicializado"
	echo "Inicializando " $dir "..."
	git init > /dev/null
	
	# inicializando repositorio remoto
	read -p "Introduce el nombre del repositorio en git (a partir de \"https://github.com/...\"): " repositorio
	echo "Añadiendo repositorio remoto en " $git$repositorio
	git remote add origin $git$repositorio > /dev/null

	if [ ! -d $init ] || [ ! "$(ls -A $dir)" ]; then 
		echo "Error añadiendo el repositorio"
		echo "Borrando " $init "..."
		rm -rf $init
		return 0
	fi
fi

# actualizando el repositorio local	
echo "Obteniendo las copias de github..."
git pull origin master > /dev/null

if [ -f $dir$bd ]; then
	# creando copia externa en git
	echo "Cargando la copia en el sistema..."
	cp $bd $pwd$bd
else
	echo "La base de datos no existe."
fi
