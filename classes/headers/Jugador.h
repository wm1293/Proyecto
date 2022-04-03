#ifndef JUGADOR_H
#define JUGADOR_H
#include "Partida.h"
#include <iostream>

using namespace std;

class Partida;


class Jugador {

    private:
    string nickname;
    int edad;
    string pass;
    int cantJugadores = 0;
    int cantPartidas = 0;

    //PSEUDOATRIBUTOS QUE DEMUESTRAN LAS ASOCIACIONES
    Partida **partidas;

    public:
        
        Jugador(string nickname, int edad, string pass);

        string getNickname();
        int getEdad();
        string getPass();

        void setNickname(string nickname);
        void setEdad(int edad);
        void setPass(string pass);
        
        //float darTotalHorasParticipantes();
        void agregarJugador(string nickname, int edad, string pass);
        ~Jugador();

};

#endif