#ifndef PARTIDAINDIVIDUAL_H
#define PARTIDAINDIVIDUAL_H
#include "Partida.h"

class PartidaIndividual : public Partida {

        private:

        public:
        PartidaIndividual();
        bool continuaPartidaAnterior();        
        float darTotalHorasParticipantes();

        ~PartidaIndividual();

};

#endif