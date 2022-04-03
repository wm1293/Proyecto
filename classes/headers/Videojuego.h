#ifndef _VIDEOJUEGO_H
#define _VIDEOJUEGO_H
#include <iostream>

using namespace std;

class Partida;

class Videojuego{
    

    public:

        enum TipoJuego {Accion,Aventura,Deporte,Otro};
        static const int MAX_PARTIDAS = 10;
        //Constructor
        Videojuego(string nombre,TipoJuego tipoJuego);

      
        //Destructor
        ~Videojuego();

    private:
        string nombre;
        TipoJuego tipoJuego;
        
        Partida **partidas;

};

#endif