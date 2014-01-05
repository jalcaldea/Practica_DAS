#include <string.h>

#ifndef CONFIGURACION_H
#define CONFIGURACION_H


class Configuracion
{
public:
	Configuracion();
private:
	bool visibilidad;
	string IP;
	int puerto;
	int maxConexion;
	int espacio;
	int maxUser;
	bool depuracion;
};

#endif 
