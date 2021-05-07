#include "exercice.hh"


 
void Exercice::init_systeme(){
	 Pompe* p11 = new Pompe(0);	
	Pompe* p12 = new Pompe(1);
	Pompe* p21 = new Pompe(0);
	Pompe* p22 = new Pompe(1);
	Pompe* p31 = new Pompe(0);
	Pompe* p32 = new Pompe(1);

	Tank* Tank1 = new Tank(p11,p12,0,"Tank1");
	Tank* Tank2 = new Tank(p21,p22,0,"Tank2");
	Tank* Tank3 = new Tank(p31,p32,0,"Tank3");

	VanneTank* 	VT12 = new VanneTank(Tank1,Tank2,0);
	VanneTank*	VT23 = new VanneTank(Tank2,Tank3,0);

	Moteur* M1 = new Moteur(Tank1);
	Moteur* M2 = new Moteur(Tank2);
	Moteur* M3 = new Moteur(Tank3);

	VanneMoteur* V12 = new VanneMoteur(Tank1,M2,0);
	VanneMoteur* V13 = new VanneMoteur(Tank1,M3,0);
	VanneMoteur* V23 = new VanneMoteur(Tank2,M3,0);

	 sys = new Systeme(p11,p12,p21,p22,p31,p32,Tank1,Tank2,Tank3,M1,M2,M3,VT12,VT23,V12,V13,V23);

}

Exercice::Exercice():QObject() {
	init_systeme();
	aff = new Affichage();
	
	}
Exercice::~Exercice(){}

Systeme* Exercice::getSys(){return sys; }
Affichage * Exercice::getAff(){return aff;}




void Exercice::exercice1(){
	 aff->b21->setVisible(false);
	num_exercice = 2;
	note =0;
	
	sys->reset_systeme();
    sys->panne_p11();
	sys->panne_p12();
	sys->panne_p21();
	//sys->getM1()->changerTankSource(NULL);*
	sys->afficherEtatSysteme();
	
	aff->reset();
	aff->init_scene();
	afficherSysteme();
	aff->HideBoutons();
	
	
 }
 
 

void Exercice::exercice2(){
	sys->reset_systeme();
	sys->vider_Tank1();
	sys->afficherEtatSysteme();
	
	aff->reset();
	aff->init_scene();
	afficherSysteme();


 }

void Exercice::exercice3(){

	sys->reset_systeme();
	
	sys->panne_p11();
	sys->panne_p21();
	sys->panne_p31();
	sys->vider_Tank2();
	
	sys->afficherEtatSysteme();
	aff->reset();
	aff->init_scene();
	afficherSysteme();
	

 }
 
void Exercice::exercice4(){
	sys->reset_systeme();
	sys->panne_p31();
	sys->panne_p32();
	sys->afficherEtatSysteme();
	
	aff->reset();
	aff->init_scene();
	afficherSysteme();
 }
 
void Exercice::exercice5(){
	
	sys->reset_systeme();
	aff->reset();
	aff->init_scene();
	srand(time(NULL));
	int proba = rand() %5;
	switch (proba)
	{
		case 1:	{vider_Tank1();break;}
		case 2:	{vider_Tank3();break;}
		default:vider_Tank2();
			
	}
	
	switch (proba)
	{
		case 0:	{ panne_p21();break;}
		case 1:	{panne_p11();panne_p12(); panne_p32();break;}
		case 2:	{panne_p21();panne_p11(); panne_p31();break;}
		case 3:	{panne_p21();panne_p22(); panne_p32();break;}
		case 4:	{panne_p11(); panne_p22();break;}
		default:break;
	}
	sys->afficherEtatSysteme();
	afficherSysteme();
	
	
 }
 
void Exercice::panne_p11()
 {
	sys->panne_p11();
	aff->panne_p11();
	sys->afficherEtatSysteme();
		 
 }
void Exercice::panne_p12()
 {
	sys->panne_p12();
	aff->panne_p12();
	sys->afficherEtatSysteme();
		 
 }
void Exercice::panne_p21()
 {
	sys->panne_p21();
	aff->panne_p21();
	sys->afficherEtatSysteme();
		 
 }
void Exercice::panne_p22()
 {
	sys->panne_p22();
	aff->panne_p22();
	sys->afficherEtatSysteme();
		 
 }
 void Exercice::panne_p31()
 {
	sys->panne_p31();
	aff->panne_p31();
	sys->afficherEtatSysteme();
		 
 }
 void Exercice::panne_p32()
 {
	sys->panne_p32();
	aff->panne_p32();
		 sys->afficherEtatSysteme();
 }
 
void Exercice::vider_Tank1(){
	
	sys->vider_Tank1();
	sys->afficherEtatSysteme();
	afficherSysteme();
}
void Exercice::vider_Tank2(){
	sys->vider_Tank2();
	sys->afficherEtatSysteme();
	afficherSysteme();
}
void Exercice::vider_Tank3(){
	sys->vider_Tank3();
	sys->afficherEtatSysteme();
	afficherSysteme();
}
 
 void Exercice::connexion(){
	 QObject::connect(aff->b1, SIGNAL(clicked()),getSys(), SLOT(switch_VT12()));		
	QObject::connect(aff->b1, SIGNAL(clicked()),getAff(), SLOT(ouvrir_VT12()));
	QObject::connect(aff->b1, SIGNAL(clicked()),this, SLOT(afficherSysteme()));


	QObject::connect(aff->b2, SIGNAL(clicked()),getSys(), SLOT(switch_VT23()));
	QObject::connect(aff->b2, SIGNAL(clicked()),getAff(), SLOT(ouvrir_VT23()));
	QObject::connect(aff->b2, SIGNAL(clicked()),this, SLOT(afficherSysteme()));

	
	QObject::connect(aff->b3, SIGNAL(clicked()),getSys(), SLOT(switch_V12()));
	QObject::connect(aff->b3, SIGNAL(clicked()),getAff(), SLOT(ouvrir_V12()));
	QObject::connect(aff->b3, SIGNAL(clicked()),this, SLOT(afficherSysteme()));

	QObject::connect(aff->b4, SIGNAL(clicked()),getSys(), SLOT(switch_V23()));
	QObject::connect(aff->b4, SIGNAL(clicked()),getAff(), SLOT(ouvrir_V23()));
	QObject::connect(aff->b4, SIGNAL(clicked()),this, SLOT(afficherSysteme()));

	QObject::connect(aff->b5, SIGNAL(clicked()),getSys(), SLOT(switch_V13()));
	QObject::connect(aff->b5, SIGNAL(clicked()),getAff(), SLOT(ouvrir_V13()));
	QObject::connect(aff->b5, SIGNAL(clicked()),this, SLOT(afficherSysteme()));
	
	QObject::connect(aff->b6, SIGNAL(clicked()),getSys(), SLOT(switch_pompe_p12()));
	QObject::connect(aff->b6, SIGNAL(clicked()),this, SLOT(afficherSysteme()));

	QObject::connect(aff->b7, SIGNAL(clicked()),getSys(), SLOT(switch_pompe_p22()));
	QObject::connect(aff->b7, SIGNAL(clicked()),this, SLOT(afficherSysteme()));
	
	QObject::connect(aff->b8, SIGNAL(clicked()),getSys(), SLOT(switch_pompe_p32()));
	QObject::connect(aff->b8, SIGNAL(clicked()),this, SLOT(afficherSysteme()));
	
	QObject::connect(aff->b9, SIGNAL(clicked()),this, SLOT(noter()));
	QObject::connect(aff->b9, SIGNAL(clicked()),this, SLOT(changer_exercice()));
	
	QObject::connect(aff->b10, SIGNAL(clicked()),this, SLOT(panne_p11()));
	QObject::connect(aff->b11, SIGNAL(clicked()),this, SLOT(panne_p12()));
	QObject::connect(aff->b12, SIGNAL(clicked()),this, SLOT(panne_p21()));
	QObject::connect(aff->b13, SIGNAL(clicked()),this, SLOT(panne_p22()));
	QObject::connect(aff->b14, SIGNAL(clicked()),this, SLOT(panne_p31()));
	QObject::connect(aff->b15, SIGNAL(clicked()),this, SLOT(panne_p32()));
	
	QObject::connect(aff->b16, SIGNAL(clicked()),this, SLOT(vider_Tank1()));
	QObject::connect(aff->b17, SIGNAL(clicked()),this, SLOT(vider_Tank2()));
	QObject::connect(aff->b18, SIGNAL(clicked()),this, SLOT(vider_Tank3()));
	
	QObject::connect(aff->b19, SIGNAL(clicked()),this, SLOT(entrainement()));
	QObject::connect(aff->b20, SIGNAL(clicked()),this, SLOT(exercice1()));
	
	QObject::connect(aff->b21, SIGNAL(clicked()),this, SLOT(noter()));
	QObject::connect(aff->b21, SIGNAL(clicked()),this, SLOT(AfficherResultat()));
 }
 
 void Exercice::changer_exercice(){	
	 	
	 switch(num_exercice) 
		{
			case 1:{ aff->b21->setVisible(true); exercice1(); break;}
			case 2: {exercice2(); break;}
			case 3: {exercice3();break;}
			case 4: {exercice4();break;}
			case 5: {exercice5();
					 aff->b21->setVisible(true);
					 aff->b9->setVisible(false);
						break;}
			default:break;
		}			
	num_exercice++;
 
 }

void Exercice::noter(){
		note += sys->verif_etat_systeme() *2;
}


void Exercice::entrainement(){
	
	sys->reset_systeme();
	aff->reset();
	aff->init_scene();
	aff->DisplayBoutons();
	sys->afficherEtatSysteme();
	
}

int Exercice::compter_lignes(FILE * fichier){
	int l;
	int res = 0;
	while((l=fgetc(fichier)) != EOF)
	{
		if(l=='\n')
			res++;
	}
	return res;
}
void Exercice::sauvegarde(){
  FILE * File = fopen ( sys->getNom() , "a+" );
  fprintf(File, "Entraînement %d: %d/10. \n",compter_lignes(File),note);
  fclose ( File );
}

void Exercice::AfficherResultat(){
	
	std::cout<<std::endl<<"Vous avez "<< note <<" points"<<std::endl;
	sauvegarde();
	note= 0;
	aff->b21->setVisible(false);
	aff->b20->setVisible(true);
	aff->b19->setVisible(true);
}

void Exercice::afficherSysteme(){
	if(sys->getTank1()->getEstPlein()) aff->Tank1Vide(); else aff->Tank1Plein();
	if(sys->getTank2()->getEstPlein()) aff->Tank2Vide(); else aff->Tank2Plein();
	if(sys->getTank3()->getEstPlein()) aff->Tank3Vide(); else aff->Tank3Plein();
	
	if(sys->getP11()->getEtat() == 0)
		{
			aff->pompe_on(310,410);
		}
	else
		{
			if(sys->getP11()->getEtat() == 1)
			{
				aff->pompe_off(310,410);
			}
			else
				{
					if(sys->getP11()->getEtat() == 2)
					{
						aff->panne_p11();
					}
				}
		}
		
	if(sys->getP12()->getEtat() == 0)
		{
			aff->pompe_on(360,410);
		}
	else
		{
			if(sys->getP12()->getEtat() == 1)
			{
				aff->pompe_off(360,410);
			}
			else
				{
					if(sys->getP12()->getEtat() == 2)
					{
						aff->panne_p12();
					}
				}
		}
		
	if(sys->getP21()->getEtat() == 0)
		{
			aff->pompe_on(460,410);
		}
	else
		{
			if(sys->getP21()->getEtat() == 1)
			{
				aff->pompe_off(460,410);
			}
			else
				{
					if(sys->getP21()->getEtat() == 2)
					{
						aff->panne_p21();
					}
				}
		}
		
	if(sys->getP22()->getEtat() == 0)
		{
			aff->pompe_on(510,410);
		}
	else
		{
			if(sys->getP22()->getEtat() == 1)
			{
				aff->pompe_off(510,410);
			}
			else
				{
					if(sys->getP22()->getEtat() == 2)
					{
						aff->panne_p22();
					}
				}
		}
		
	if(sys->getP31()->getEtat() == 0)
		{
		
			aff->pompe_on(610,410);
		}
	else
		{
			if(sys->getP31()->getEtat() == 1)
			{
				aff->pompe_off(610,410);
			}
			else
				{
					if(sys->getP31()->getEtat() == 2)
					{
						aff->panne_p31();
					}
				}
		}
		
	if(sys->getP32()->getEtat() == 0)
		{
			aff->pompe_on(660,410);
		}
	else
		{
			if(sys->getP32()->getEtat() == 1)
			{
				aff->pompe_off(660,410);
			}
			else
				{
					if(sys->getP32()->getEtat() == 2)
					{
						aff->panne_p32();
					}
				}
		}
	
	
}
