#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H
#include "Partida.h"

class Jugador;


class PartidaMultijugador : public Partida {

        private:

        Jugador *jugador;

        public:
            PartidaMultijugador(DtFechaHora fechaHora, float duracion);
            bool trasmitirVivo();        
            float darTotalHorasParticipantes();

            ~PartidaMultijugador();

};

#endif