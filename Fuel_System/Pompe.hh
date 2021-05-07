#ifndef DEF_POMPE
#define DEF_POMPE

//Classe d'une pompe de réservoir(tank)
class Pompe{
	private:
	 	int etat ; // 0 marche 1 arret 2 panne
	public:
		Pompe();
		Pompe(int newstate);
		Pompe(Pompe* p);
		int getEtat();
		void setEtat(int state);
		void demarrerPompe();
		void arreterPompe();
		void creerPannePompe();
		~Pompe();
		
};



#endif 
