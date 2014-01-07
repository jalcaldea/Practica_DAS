#include <string.h>

#ifndef NIVEL_H
#define NIVEL_H

#define NPermisos

class Archivo
{
private:
	bool permisos[NPermisos];

public:
	bool cambiarPermiso(int permiso, bool estado);

	bool resetPermisos();

	void setPermisos();

	bool[] getPermisos();

};

#endif 

