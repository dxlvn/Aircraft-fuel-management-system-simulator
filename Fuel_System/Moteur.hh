#ifndef DEF_MOTEUR
#define DEF_MOTEUR

#include "Tank.hh"

class Moteur{ 
	private :
		Tank* tankSource; // Quel tank alimente le moteur en temps réel 
	public :
		Moteur();
		Moteur(Tank* T);
		Moteur(Moteur* M);
		Tank* getTankSource();
		void changerTankSource(Tank* T);
		~Moteur();
};


#endif
