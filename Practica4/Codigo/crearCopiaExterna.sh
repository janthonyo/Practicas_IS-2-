#!/bin/bash

pwd=`pwd`"/"
dir="/tmp/copia_externa/"
init=".git/"
git="https://github.com/"
bdBack=$1`date +%y-%m-%d_%H:%M`
bd=$1

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
	echo "Añadiendo repositorio remoto en " $git$repositorio "..."
	git remote add origin $git$repositorio > /dev/null

	if [ ! -d $init ] || [ ! "$(ls -A $dir)" ]; then 
		echo "Error añadiendo el repositorio"
		echo "Borrando " $init "..."
		rm -rf $init
		return 0
	fi
fi

echo $pwd$bd

if [ -f $pwd$bd ]; then
	# actualizando el repositorio local	
	git pull origin master > /dev/null
	cp $pwd$bd $bdBack
	echo "Añadiendo actualizaciones a git..."
	git add . > /dev/null
	echo "Realizando los commit necesarios..."
	git commit -m "Inicializar el directorio" > /dev/null

	# creando copia externa en git
	echo "Creando copia externa en git..."
	git push origin master
else
	echo "La base de datos no existe."
fi

cd $pwd
