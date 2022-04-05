#include "../headers/Jugador.h"
Jugador::Jugador(){
    
}

Jugador::Jugador(string nickname, int edad, string pass){        
    
   
    this->nickname = nickname;
    this->edad = edad;
    this->pass = pass; 

   /* Jugador *nuevo = new Jugador(nickname,edad,pass);          
    
    this->jugadores[this->cantJugadores] = nuevo;
    this->cantJugadores++;*/

    //cout << "Se agrego " << this->nickname << " con exito." << endl;
}
void Jugador::setCantidadJugadores(){
    this->cantJugadores++;
}

void Jugador::agregarJugador(Jugador *jugador){
    this->jugadores[this->cantJugadores] = jugador;
    this->cantJugadores++;
    cout << "agregado! " ;

}


/*void Jugador::agregarJugador(string nickname, int edad, string pass){

    if(this->nickname == nickname){
        throw invalid_argument("El nickname ya existe.");
    }
        this->nickname = nickname;
        this->edad = edad;
        this->pass = pass;
        this->partidas = new Partida*[cantPartidas];

        if(this->cantJugadores==MAX_JUGADORES){
            throw std::invalid_argument("No se pueden crear mas jugadores.");

        }


    Jugador *jugador = new Jugador(nickname,edad,pass);

    //jugador->nickname = nickname;
    //jugador->edad = edad;
    //jugador->pass = pass;  
    
    
    this->jugadores[this->cantJugadores] = jugador;
    this->cantJugadores++;

    cout << "Jugador " << jugador->nickname << " agregado con exito." << endl;


   
}
*/

string Jugador::getNickname(){return this->nickname;}
string Jugador::getPass(){return this->pass;}
int Jugador::getEdad(){return this->edad;}

void Jugador::setNickname(string nickname){
    this->nickname = nickname;
}
void Jugador::setEdad(int edad){
    this->edad = edad;
}
void Jugador::setPass(string pass){
    this->pass = pass;
}

int Jugador::getCantidadJugadores(){
    return this->cantJugadores;
}
Jugador **Jugador::getJugadores(){
    return this->jugadores;
}


//float Jugador::darTotalHorasParticipantes(){ }

Jugador::~Jugador(){}


