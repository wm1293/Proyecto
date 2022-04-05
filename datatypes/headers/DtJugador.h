#ifndef DTJUGADOR_H
#define DTJUGADOR_H

#include "../headers/DtPartida.h"
#include <iostream>

using namespace std;


class DtJugador {

    private:
    string nickname;
    int edad;
    

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