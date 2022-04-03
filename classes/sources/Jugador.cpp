#include "../headers/Jugador.h"

Jugador::Jugador(string nickname, int edad, string pass){


        this->nickname = nickname;
        this->edad = edad;
        this->pass = pass;
        this->partidas = new Partida*[cantPartidas];
    
        

}

void Jugador::agregarJugador(string nickname, int edad, string pass){

    if(this->nickname == nickname){
        throw invalid_argument("El nickname ya existe.");
    }
        this->nickname = nickname;
        this->edad = edad;
        this->pass = pass;
        this->partidas = new Partida*[cantPartidas];
    
}

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
    

//float Jugador::darTotalHorasParticipantes(){ }

Jugador::~Jugador(){}


