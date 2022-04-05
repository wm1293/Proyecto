#ifndef DTJUGADOR_H
#define DTJUGADOR_H

#include "../headers/DtJugador.h"
#include <iostream>

using namespace std;


class DtJugador {

    private:
    string nickname;
    int edad;
    int cantJugadores;

    public:
        
        DtJugador(string nickname, int edad);

        string getNickname();
        int getEdad();
       
        //un Datatype tiene sentido que tenga setting ?
        void setNickname(string nickname);
        void setEdad(int edad);
        void setCantidadJugadores();
        
        
        
        ~DtJugador();

};

#endif