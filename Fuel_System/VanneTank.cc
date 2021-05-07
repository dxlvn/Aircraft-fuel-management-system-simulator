#include "VanneTank.hh"


//Constructeur
VanneTank::VanneTank(){
	
}
VanneTank::VanneTank(Tank* t1,Tank* t2,int state):tankA(t1),tankB(t2),estFermee(state){}
VanneTank::VanneTank(VanneTank* V):tankA(V->tankA),tankB(V->tankB),estFermee(V->estFermee){}


// //Methodes

int VanneTank::getEstFermee(){
	return estFermee;
}

void VanneTank::setEstFermee(int state){
	estFermee = state;
}

void VanneTank::fermerVanneTank(){
	setEstFermee(0); // 0 valeur de vanne fermée}
}
void VanneTank::ouvrirVanneTank(){
	setEstFermee(1); // 1 valeur de vanne ouverte
}

Tank* VanneTank::getTankA(){
	return tankA;
}
Tank* VanneTank::getTankB(){
	return tankB;
}

//Destructeur

VanneTank::~VanneTank(){}
