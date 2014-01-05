#include <string.h>
#include <vector.h>

#ifndef AGENTE_H
#define AGENTE_H

class Agente
{
    
public:
	Agente(String userid);
	Agente(Pizarra pizarra);
	bool iniciarSesion(String userid, String pass);
	string mostrarEstadisticas(String userid);
	string mostrarEstadisticasGenerales();
	Archivo escribir(String direccion, Archivo archivo);
	Archivo leer(String direccion):Archivo;
	Archivo escrituraLectura(String direccion, Archivo archivo);
	Estado mostrarEstado():Estado;
	string buscar(String nombre);
	Archivo comparar(Archivo arch1, Archivo arch2);
	bool crearCarpeta(String direccion, String nombre);
	bool crearUsuario(String nombre, String userid, String pass, Nivel nivel);
	bool gestionarPermisos(Nivel nivel, Bool[] permisos);
	Pizarra configurarPizarra(Configuracion config);
	string setUserid(string userid);
	void setPass(String pass);
 	
private:
	string userid;
	string pass;
	Pizarra pizarra;
	Usuario usuario;
	bool comprobarPermisos(Usuario user, int permiso);
	bool establecerConexion(Pizarra pizarra);
	bool cerrarSesion(Pizarra pizarra); 
};

#endif 
