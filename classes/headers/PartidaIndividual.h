#ifndef PARTIDAINDIVIDUAL_H
#define PARTIDAINDIVIDUAL_H
#include "Partida.h"
#include "../../datatypes/headers/DtFechaHora.h"

class PartidaIndividual : public Partida {

        private:

        public:
                PartidaIndividual(DtFechaHora fechaHora, float duracion);
                bool continuaPartidaAnterior();        
                float darTotalHorasParticipantes();

                ~PartidaIndividual();

};

#endif