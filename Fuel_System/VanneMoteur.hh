#ifndef DEF_VANNE_MOTEUR
#define DEF_VANNE_MOTEUR

#include "Tank.hh"
#include "Moteur.hh"

//Classe de la vanne reliant un tank à un moteur
class VanneMoteur{
		private:
			Tank* linkTank;
			Moteur* linkMoteur;
			int estFermee; // 0 si VanneMoteur fermée, 1 sinon
		public:
			VanneMoteur();
			VanneMoteur(Tank* T,Moteur* M,int state);
			VanneMoteur(VanneMoteur* V);
			Tank* getLinkTank();
			int getEstFermee();
			void setEstFermee(int state);
			void fermerVanneMoteur();
			void ouvrirVanneMoteur();
			~VanneMoteur();
			
};



#endif 
