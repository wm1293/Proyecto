#ifndef _VIDEOJUEGO_H
#define _VIDEOJUEGO_H
#include <iostream>

using namespace std;

class Partida;

class Videojuego{
    private:
        string nombre;

    public:

        enum TipoJuego {Accion,Aventura,Deporte,Otro};
        //Constructor
        Videojuego(string,TipoJuego);




      
        //Destructor
        ~Videojuego();



};

#endif