#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>

using namespace std;

class Partida;


class Jugador {

    private:
    string nickname;
    int edad;
    string pass;

    public:
        
        Jugador();
        float darTotalHorasParticipantes();

        ~Jugador();

};

#endif