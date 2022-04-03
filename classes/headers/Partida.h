#ifndef PARTIDA_H
#define PARTIDA_H

#include "../../datatypes/headers/DtFechaHora.h"
#include "../../datatypes/headers/DtPartida.h"



class Jugador;
class Videojuego;

class Partida {
    private:
        DtFechaHora fechaHora;
        float duracion;
        //PSEUDOATRIBUTO QUE MUESTRA LA ASOCIACION CON JUGADOR
        Jugador *jugador;
        Videojuego *videoJuego;

    public:
        Partida(DtFechaHora fechaHora, float duracion);
        static const int MAX_PARTIDAS;
        virtual float darTotalHorasParticipantes() {return 0;}


        ~Partida();
};

#endif