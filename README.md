Práctica DAS
============

Este repositorio vamos a desarrollar la [práctica obligatoria](./enunciado.pdf) de la asignatura de Diseño y Arquitectura de Software.


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

Para comenzar tenemos que clonar el repositorio, pero... 

#### ¿Qué es clonar un repositorio?

Como la propia palabra indica, al clonar un repositorio lo que hacemos es crear un clon de uno ya existente, generalmente se suele clonar como un nuevo repositorio local.

#### ¿Cómo se clona un repositorio?

El comando `clone` de Git realiza justamente esta acción.

**Windows:** Para clonar en Windows, si tenemos instalada la aplicación de [GitHub](https://github.com/) basta con que abramos la aplicación y en el apartado de Repositorios y le damos a clonar:

    INSERTAR IMAGEN AQUÍ

**Ubuntu:** En linux basta con que ejecutemos lo siguiente en la Terminal:

    $ cd <direcion de la carpeta>
    $ git clone https://github.com/username/repositorio.git

**NOTA:** Este archivo esta actualmente en construcción.
