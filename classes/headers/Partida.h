#ifndef PARTIDA_H
#define PARTIDA_H

#include "../../datatypes/headers/DtFechaHora.h"



//class Videojuego;

class Partida {
    private:
        DtFechaHora fechaHora;
        float duracion;

    public:
        Partida(DtFechaHora fecha, float duracion);
    virtual float darTotalHorasParticipantes() {return 0;}


        ~Partida();
};

#endif