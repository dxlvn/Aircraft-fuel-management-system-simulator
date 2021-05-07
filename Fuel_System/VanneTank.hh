#ifndef DEF_VANNE_TANK
#define DEF_VANNE_TANK

#include "Tank.hh"

// Classe de la vanne reliant deux tanks

class VanneTank{
		private:
			Tank* tankA ;
			Tank* tankB ;
			int estFermee; // 0 si VanneTank fermée,1 sinon
		public:
			VanneTank();
			VanneTank(Tank* t1,Tank* t2,int state);
			VanneTank(VanneTank* V);
			int getEstFermee();
			void setEstFermee(int state);
			void fermerVanneTank();
			void ouvrirVanneTank();
			Tank* getTankA();
			Tank* getTankB();
			~VanneTank();
		
};



#endif 

