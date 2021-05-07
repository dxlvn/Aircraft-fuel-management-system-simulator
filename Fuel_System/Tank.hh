#ifndef DEF_TANK
#define DEF_TANK

#include "Pompe.hh"
#include <string>

//Classe d'un tank(réservoir)
class Tank{
	private:
		Pompe* pompe1;
		Pompe* pompe2;
		int estPlein ; // 0 si réservoir plein, 1 sinon
		std::string nom;
	public:
		Tank();
		Tank(Pompe* p,Pompe* q,int estPlein);
		Tank(Pompe* p,Pompe* q,int estPlein,std::string nom);
		Tank(Tank* T);
		Pompe* getPompe1();
		Pompe* getPompe2();
		int getEstPlein();
		void setEstPlein(int state);
		void viderTank();
		void remplirTank(); 
		std::string getNom();
		~Tank();
		
};


#endif 
