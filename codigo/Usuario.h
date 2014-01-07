#include <string.h>

#ifndef USUARIO_H
#define USUARIO_H


class Usuario
{
public:
	bool comprobarUser(string pass);
	string getNombre();
	string getUserid();
	Nivel getNivel();
	void setPass(string pass);
	void setNivel(Nivel nivel);

private:
	string nombre;
	string userid;
	string pass;
	Nivel nivel;
};

#endif 
