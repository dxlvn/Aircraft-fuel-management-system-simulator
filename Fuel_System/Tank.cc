#include "Tank.hh"


//Constructeur

Tank::Tank(){
}

Tank::Tank(Pompe* p,Pompe* q,int fill):pompe1(p),pompe2(q){this->estPlein = fill;}

Tank::Tank(Pompe* p,Pompe* q,int fill,std::string nom):pompe1(p),pompe2(q){this->estPlein = fill; this->nom = nom;}

Tank::Tank(Tank* T):pompe1(T->pompe1),pompe2(T->pompe2){
	estPlein = T->estPlein ;
	}

//Methodes

Pompe* Tank::getPompe1(){
	return pompe1;
}

Pompe* Tank::getPompe2(){
	return pompe2;
}

int Tank::getEstPlein(){
	return estPlein;
}

std::string Tank::getNom(){
	return nom;
}
void Tank::setEstPlein(int state){
	estPlein = state;
}

void Tank::viderTank(){
	setEstPlein(1); // 1 valeur de réservoir vide
}

void Tank::remplirTank(){
	setEstPlein(0); // 0 valeur de réservoir plein
}

//Destructeur

Tank::~Tank(){}
