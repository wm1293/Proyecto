#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H
#include "Partida.h"

class Jugador;

class PartidaMultijugador : public Partida {

        private:

        public:
        PartidaMultijugador();
        bool continuaPartidaAnterior();        
        float darTotalHorasParticipantes();

        ~PartidaMultijugador();

};

#endif