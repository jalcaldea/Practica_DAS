#include <string.h>
#include <vector.h>

#ifndef PIZARRA_H
#define PIZARRA_H


class Pizarra
{
    
public:
    Pizarra();
    string mostrarEstadisticas(string userid, Usuario user);
    void escribir(string direccion, Archivo archivo, Usuario user);
    Archivo leer(string direccion, Usuario user);
    Archivo lecturaEscritura(string direccion, Archivo archivo, Usuario user);
    Estado mostrarEstado(Usuario user);
    string buscar(string nombre, Usuario user);
    Archivo comparar(Archivo arch1, Archivo arch2, Usuario user);
    bool crearCarpeta(string direccion, string nombre, Usuario user);
    bool crearUsuario(string nombre, string userid, string pass, Nivel nivel, Usuario user);
    bool gestionarPermisos(Nivel nivel, bool[] permisos, Usuario user);
    bool configurarPizarra(Configuracion config, Usuario user);
    Usuario getUsuario(string userid);
    
private:
	Estado estado;
	vector<Usuario> usuarios;
	vector<Estadistica> estadisticas;
	vector<Nivel> niveles;
	Configuracion config;
    void setEstado(Estado estado);
    void setUsuarios(vector<Usuario>);
    void setEstadisticas(vector<Estadistica>);
    bool comprobarPermisos(Usuario user, int permiso);
    
};

#endif 
