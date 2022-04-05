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

    Jugador **jugadores;  

    public:
        
        Jugador();
        Jugador(string nickname, int edad, string pass);
        static const int MAX_JUGADORES = 10;

        string getNickname();
        int getEdad();
        string getPass();
        int getCantidadJugadores();
        

        

        void setNickname(string nickname);
        void setEdad(int edad);
        void setPass(string pass);
        void setCantidadJugadores();
        void agregarJugador(Jugador *jugador);
        Jugador **getJugadores();
        
        //float darTotalHorasParticipantes();
        //void agregarJugador(string nickname, int edad, string pass);
        
        ~Jugador();

};

#endif