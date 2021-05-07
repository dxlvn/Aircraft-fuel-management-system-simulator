#include "VanneMoteur.hh"

//Constructeur
VanneMoteur::VanneMoteur(){
	
}
VanneMoteur::VanneMoteur(Tank* T,Moteur* M,int state):linkTank(T),linkMoteur(M),estFermee(state){}
VanneMoteur::VanneMoteur(VanneMoteur* V):linkTank(V->linkTank),linkMoteur(V->linkMoteur),estFermee(V->estFermee){}


//Methodes

Tank* VanneMoteur::getLinkTank(){
	return linkTank;
}

int VanneMoteur::getEstFermee(){
	return estFermee;
}

void VanneMoteur::setEstFermee(int state){
	estFermee = state;
}

void VanneMoteur::fermerVanneMoteur(){
	setEstFermee(0); // 0 valeur de vanne fermée}
}
void VanneMoteur::ouvrirVanneMoteur(){
	setEstFermee(1); // 1 valeur de vanne ouverte
}

//Destructeur

VanneMoteur::~VanneMoteur(){}
