Práctica DAS
============

Este repositorio vamos a desarrollar la [práctica obligatoria](enunciado.pdf) de la asignatura de Diseño y Arquitectura de Software.


Estado de la práctica
---------------------

¿ Cómo utilizar Git ?
---------------------
Aqui tenemos una pequeña guia introductoria de como usar Git.

### Instalación

Lo primero y más importante es instalarlo:

**Windows:** Descagamos el [ejecutable](http://github-windows.s3.amazonaws.com/GitHubSetup.exe) y lo instalamos.

**Ubuntu:** Ejecutamos en el terminal `sudo apt-get install git`. Aunque con esto ya esta listo, es probable que deseemos acceder directamente a las herrramientas que Git nos proporciona, para ello podemos ejecurar el siguiente código:

    $ sudo add-apt-repository ppa:rabbitvcs/rabbitvcs-testing
    $ sudo apt-get update
    $ sudo apt-get install rabbitvcs-nautilus3 rabbitvcs-gedit rabbitvcs-cli

### Primeros pasos

En primer lugar necesitamos configurar Git.

#### Configurar Git

La configuración de Git es muy simple y amena:

**Windows:** 404 - Not Found

**Linux:** Debemos escribir en el terminal:

    $ git config --global user.name "Tu nombre"
    $ git config --global user.email "tu_email@ejemplo.com"
Sustituye `Tu nombre` por tu nombre  y `tu_email@ejemplo.com` por tu correo en [GitHub](https://github.com/).

Esto se debe a la hora de publicar las revisiones, para que quede constacia de quien ha hecho qué, en [GitHub](https://github.com/) cada correo esta asociado a una cuenta.

#### ¿Qué es clonar un repositorio?

Como la propia palabra indica, al clonar un repositorio lo que hacemos es crear un clon de uno ya existente, generalmente se suele clonar como un nuevo repositorio local.

#### ¿Cómo se clona un repositorio?

El comando `clone` de Git realiza justamente esta acción.

**Windows:** Para clonar en Windows, si tenemos instalada la aplicación de [GitHub](https://github.com/) basta con que abramos la aplicación y en el apartado de Repositorios y le damos a clonar:

    INSERTAR IMAGEN AQUÍ

**Linux:** En linux basta con que ejecutemos lo siguiente en la Terminal:

    $ cd <path a la carpeta donde se va a escargar>
    $ git clone https://github.com/username/repositorio.git

En nuestro caso `https://github.com/KekoAlk/Practica_DAS.git`.

#### ¿Cómo actualizar el repositorio a la última revisión?

Antes de saber cómo actualizar el contenido del Git, es recomendable saber como poder actualizarlo.

**Windows:** 404 - Not Found -> HAY QUE METERLO

**Linux:** Es tan simple como:
1. Acedemos a la carpeta donde se encuentra en repo con en mandato `cd`
    $ cd <path de la carpeta>
2. Ejecutamos en comando de Git para ello `git pull`
    $ git pull

#### ¿Cómo puedo modificar un archivo?

Una vez tenemos el repositorio actualizado podemos crear cualquier archivo o modificarlo con el programa que te apetezca, ya podrías actualizar.

**Windows:** 404 - Not Found -> HAY QUE METERLO
**Linux:** Existen varias formas de actualizar el repositorio:

1. Mediante el comando `git add` añadimos manualmente los archivos que hemos modificado, por ejemplo:
    $ git add ./source/main.cpp  # Se añade el archivo ./source/main.cpp
    $ git add source             # Se añade todo lo modificado en la carpeta /source
    $ git add .                  # Se actualiza todo lo que haya variado.
Y posteriormente con el comando `git commit` añadimos un comentario para lo que se haya actualizado, por ejemplo:
    $ git commit -m "Añadido main"  # Se actualiza con el mensaje "Añadido main"
    $ git commit                    # Se ejecuta el editor de texto predefinido para insertar el comentario
2. Se puede usar el argumento `-a` para el mandato `git commit` de forma que hace un todo en uno y actualiza los archivos.

**Nota:** No es recomendable hacer uso del método 2, a no ser que uno sea muy consciente de qué ha modificado.

Por último solo falta subir los cambios al sevidor de [GitHub](https://github.com/), el mécanismo es muy simple:

* Si es la primera vez que lo haces, deberás añadir un punto remoto, así:
    $ git remote add origin https://github.com/usuario/repositorio.git
En nuestro caso `https://github.com/KekoAlk/Practica_DAS.git`
* Despues, usando el comando `git push` actualizamos, se usa de esta manera:
    $ git push <dir> <brach>
Siendo `<dir>` el directorio, por ejemplo `origin`, y `<branch>` la rama del repositorio, generalmente 'master'. En nuestro caso:
    $ git push origin master

**NOTA:** Este archivo esta actualmente en construcción.
