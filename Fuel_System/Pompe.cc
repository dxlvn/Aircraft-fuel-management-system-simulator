#include "Pompe.hh"

//Constructeur

Pompe::Pompe(){etat = 0 ;}; // en marche par défaut
Pompe::Pompe(int newstate):etat(newstate){};
Pompe::Pompe(Pompe* p){etat = p->etat;}

int Pompe::getEtat(){
	return etat;
}

void Pompe::setEtat(int state){
	etat = state;
}

void Pompe::demarrerPompe(){
	setEtat(0); // 0 valeur de marche
}
void Pompe::arreterPompe(){
	setEtat(1); // 1 valeur d'arrêt
}
void Pompe::creerPannePompe(){
	setEtat(2); // 2 valeur de panne
}

//Destructeur

Pompe::~Pompe(){};