#include "Moteur.hh"

//Consructeur
Moteur::Moteur(){

}
Moteur::Moteur(Tank* T):tankSource(T){}
Moteur::Moteur(Moteur *M):tankSource(M->tankSource){}

//Methodes

void Moteur::changerTankSource(Tank* T){
	tankSource = T;
}

Tank* Moteur::getTankSource(){
	return tankSource;
}

//Destructeur

Moteur::~Moteur(){}
