#include "Systeme.hh"
#include <iostream>

using namespace std;

Systeme::Systeme(){}

Systeme::Systeme(Pompe* p11,Pompe* p12,Pompe* p21,Pompe* p22,Pompe* p31,Pompe* p32,Tank* Tank1,Tank* Tank2,Tank* Tank3,Moteur* M1,Moteur* M2,Moteur* M3,VanneTank* VT12,VanneTank* VT23,VanneMoteur* V12,VanneMoteur* V13,VanneMoteur* V23
):p11(p11),p12(p12),p21(p21),p22(p22),p31(p31),p32(p32),Tank1(Tank1),Tank2(Tank2),Tank3(Tank3),M1(M1),M2(M2),M3(M3),VT12(VT12),VT23(VT23),V12(V12),V13(V13),V23(V23){}


Pompe* Systeme::getP11(){
	return p11;
}
Pompe* Systeme::getP12(){
	return p12;
}
Pompe* Systeme::getP21(){
	return p21;
}
Pompe* Systeme::getP22(){
	return p22;
}
Pompe* Systeme::getP31(){
	return p31;
}
Pompe* Systeme::getP32(){
	return p32;
}
Tank* Systeme::getTank1(){
	return Tank1;
}
Tank* Systeme::getTank2(){
	return Tank2;
}
Tank* Systeme::getTank3(){
	return Tank3;
}
Moteur* Systeme::getM1(){
	return M1;
}
Moteur* Systeme::getM2(){
	return M2;
}
Moteur* Systeme::getM3(){
	return M3;
}
VanneTank* Systeme::getVT12(){
	return VT12;
}
VanneTank* Systeme::getVT23(){
	return VT23;
}
VanneMoteur* Systeme::getV12(){
	return V12;
}
VanneMoteur* Systeme::getV13(){
	return V13;
}
VanneMoteur* Systeme::getV23(){
	return V23;
}
void Systeme::vider_Tank1(){
	this->getTank1()->viderTank();
}
void Systeme::vider_Tank2(){
	this->getTank2()->viderTank();
}
void Systeme::vider_Tank3(){
	this->getTank3()->viderTank();
}
void Systeme::panne_p11(){
	this->getP11()->creerPannePompe();
}
void Systeme::panne_p12(){
	this->getP12()->creerPannePompe();
}
void Systeme::panne_p21(){
	this->getP21()->creerPannePompe();
}
void Systeme::panne_p22(){
	this->getP22()->creerPannePompe();
}
void Systeme::panne_p31(){
	this->getP31()->creerPannePompe();
}
void Systeme::panne_p32(){
	this->getP32()->creerPannePompe();
}
void Systeme::demarrer_p11(){
	this->getP11()->demarrerPompe();
}
void Systeme::demarrer_p12(){
	this->getP12()->demarrerPompe();
}
void Systeme::demarrer_p21(){
	this->getP21()->demarrerPompe();
}
void Systeme::demarrer_p22(){
	this->getP22()->demarrerPompe();
}
void Systeme::demarrer_p31(){
	this->getP31()->demarrerPompe();
}
void Systeme::demarrer_p32(){
	this->getP32()->demarrerPompe();
}
void Systeme::arreter_p11(){
	this->getP11()->arreterPompe();
}
void Systeme::arreter_p12(){
	this->getP12()->arreterPompe();
}
void Systeme::arreter_p21(){
	this->getP21()->arreterPompe();
}
void Systeme::arreter_p22(){
	this->getP22()->arreterPompe();
}
void Systeme::arreter_p31(){
	this->getP31()->arreterPompe();
}
void Systeme::arreter_p32(){
	this->getP32()->arreterPompe();
}
void Systeme::fermer_VT12(){
	this->getVT12()->fermerVanneTank();
}
void Systeme::fermer_VT23(){
	this->getVT23()->fermerVanneTank();
}
void Systeme::ouvir_VT12(){
	this->getVT12()->ouvrirVanneTank();
}
void Systeme::ouvir_VT23(){
	this->getVT23()->ouvrirVanneTank();
}
void Systeme::fermer_V12(){
	this->getV12()->fermerVanneMoteur();
}
void Systeme::fermer_V13(){
	this->getV13()->fermerVanneMoteur();
}
void Systeme::fermer_V23(){
	this->getV23()->fermerVanneMoteur();
}
void Systeme::ouvrir_V12(){
	this->getV12()->ouvrirVanneMoteur();
}
void Systeme::ouvrir_V13(){
	this->getV13()->ouvrirVanneMoteur();
}
void Systeme::ouvrir_V23(){
	this->getV23()->ouvrirVanneMoteur();
}

void Systeme::EtatPompe(int i){
	if(i == 0){
		std::cout<<"marche"<<std::endl;
	}
	else {
		if(i == 1){
			std::cout<<"arret"<<std::endl;

		}
		else{
			if(i==2){
				std::cout<<"panne"<<std::endl;
			}
		}
	}
}
void Systeme::EtatVanne(int i){	
	if(i == 0){
		std::cout<<"fermé"<<std::endl;
	}
	else {
		if(i == 1){
			std::cout<<"ouvert"<<std::endl;

		}
	}
}
void Systeme::EtatTank(int i){
	if(i == 0){
		std::cout<<"plein"<<std::endl;
	}
	else {
		if(i == 1){
			std::cout<<"vide"<<std::endl;

		}
	}
}
void Systeme::afficherEtatSysteme(){
	
	cout<<endl<<endl<<endl<<endl;
	cout<<"Pilote :"<<nom<<std::endl;
	cout<<"-------Dans Pompes------"<<endl;
	cout<<"Etat pompe p11: ";   EtatPompe(p11->getEtat());
	cout<<"Etat pompe p12: ";   EtatPompe(p12->getEtat());
	cout<<"Etat pompe p21: ";	EtatPompe(p21->getEtat());
	cout<<"Etat pompe p22: ";	EtatPompe(p22->getEtat());
	cout<<"Etat pompe p31: ";	EtatPompe(p31->getEtat());
	cout<<"Etat pompe p32: ";	EtatPompe(p32->getEtat());
	cout<<"-------Dans Tanks------"<<endl;
	cout<<"Etat Tank 1: ";	EtatTank(Tank1->getEstPlein());
	cout<<"Etat Tank 2: ";	EtatTank(Tank2->getEstPlein());
	cout<<"Etat Tank 3: ";	EtatTank(Tank3->getEstPlein());
	cout<<"-------Dans VanneTank------"<<endl;
	cout<<"Etat VT12: ";	EtatVanne(VT12->getEstFermee());
	cout<<"Etat VT23: ";	EtatVanne(VT23->getEstFermee());
	cout<<"-------Dans VanneMoteur------"<<endl;
	cout<<"Etat V12: ";	EtatVanne(V12->getEstFermee());
	cout<<"Etat V13: ";	EtatVanne(V13->getEstFermee());
	cout<<"Etat VT23: ";	EtatVanne(V23->getEstFermee());
	cout<<"-------Flux du carburant------"<<V23->getEstFermee()<<endl;
	cout<<"M1 alimenté par "<<getNomTankSourceM1()<<endl;
	cout<<"M2 alimenté par "<<getNomTankSourceM2()<<endl;
	cout<<"M3 alimenté par "<<getNomTankSourceM3()<<endl;
}


void Systeme::switch_VT23(){
	
	
	if(getVT23()->getEstFermee()) {
		fermer_VT23();
		if(getTank2()->getEstPlein() && !getTank3()->getEstPlein()) getTank2()->remplirTank();
			else
				{
				if(getTank3()->getEstPlein() && !getTank2()->getEstPlein()) getTank3()->remplirTank();
				
				}
			}
	else {ouvir_VT23();}
	afficherEtatSysteme();
}

std::string Systeme::getNomTankSourceM1(){
	return getM1()->getTankSource()->getNom();
}
std::string Systeme::getNomTankSourceM2(){
	return getM2()->getTankSource()->getNom();
}
std::string Systeme::getNomTankSourceM3(){
	return getM3()->getTankSource()->getNom();
}

void Systeme::switch_VT12(){
	
	if(getVT12()->getEstFermee()) {
		fermer_VT12();
		if(getTank2()->getEstPlein() && !getTank1()->getEstPlein()) getTank2()->remplirTank();
			else
				{
				if(getTank1()->getEstPlein() && !getTank2()->getEstPlein()) getTank1()->remplirTank();
				}
			}
	else ouvir_VT12();
	afficherEtatSysteme();
}

void Systeme::switch_V12(){
	if(getV12()->getEstFermee()) {fermer_V12();}
	else {ouvrir_V12();}
	afficherEtatSysteme();
}

void Systeme::switch_V23(){
	if(getV23()->getEstFermee()) {fermer_V23();}
	else {ouvrir_V23();}
	afficherEtatSysteme();
}

void Systeme::switch_V13(){
	if(getV13()->getEstFermee()) {fermer_V13();}
	else {ouvrir_V13();}
	afficherEtatSysteme();
}

void Systeme::switch_pompe_p12(){
	if(getP12()->getEtat() == 1)		//si pompe en arret
	{
			demarrer_p12();			
		if(getP11()->getEtat() == 2){
			std::cout<<"Moteur 1 -> Tank 1"<<std::endl;		//si pompe principale en panne
		}
		else{
			if(!getV12()->getEstFermee()){		//si les pompes du tank 2 sont en panne
				if((getP21()->getEtat() == 2)
				&&(getP22()->getEtat() == 2))
				{	
					getM2()->changerTankSource(getTank1());
					std::cout<<"Moteur 2 -> Tank 1"<<std::endl;}
				}
			else
				{
				if(!getV13()->getEstFermee()){		//si pompes tank 3 en panne 
					if((getP31()->getEtat() == 2)
						&&(getP32()->getEtat() == 2))
					{
						getM3()->changerTankSource(getTank1());
						std::cout<<"Moteur 3 -> Tank 1"<<std::endl;
					}
				}
			}
		}
	}
	else 
	{
		if(getP12()->getEtat()==0)
		arreter_p12();
	}
	afficherEtatSysteme();
	
}

void Systeme::switch_pompe_p22(){
	if(getP22()->getEtat()==1)
	{
			demarrer_p22();
		if(getP21()->getEtat() == 2)		//si pompe principale en panne
		{		
			std::cout<<"Moteur 2 -> Tank 2"<<std::endl;
		
		}
		else{
			if(!getV23()->getEstFermee()){
				if((getP31()->getEtat() == 2)
				&&(getP32()->getEtat() == 2))
				{	
					getM3()->changerTankSource(getTank2());
					std::cout<<"Moteur 3 -> Tank 2"<<std::endl;}
				}
			else
				{
				if(!getV12()->getEstFermee()){
					if((getP11()->getEtat() == 2)
						&&(getP12()->getEtat() == 2))					
					{
						getM1()->changerTankSource(getTank2());
						std::cout<<"Moteur 1 -> Tank 2"<<std::endl;
					}
				}
			}
		}
	}
	else 
	{
		if(getP22()->getEtat()==0)
		arreter_p22();
	}
	afficherEtatSysteme();
}

void Systeme::switch_pompe_p32(){
	if(getP32()->getEtat()==1)
	{
			demarrer_p32();
		if(getP31()->getEtat() == 2){		//si pompe principale en panne
			std::cout<<"Moteur 3 -> Tank 3"<<std::endl;
		}
		else{
			if(!getV23()->getEstFermee()){
				if((getP21()->getEtat() == 2)&&(getP22()->getEtat() == 2))
				{	
					getM2()->changerTankSource(getTank3());
					std::cout<<"Moteur 2 -> Tank 3"<<std::endl;}
				}
			else
				{
				if(!getV13()->getEstFermee()){
					if((getP11()->getEtat() == 2)
						&&(getP12()->getEtat() == 2))
					{
						getM1()->changerTankSource(getTank3());
						std::cout<<"Moteur 1 -> Tank 3"<<std::endl;
					}
				}
			}
		}
	}
	else 
	{
		if(getP32()->getEtat()==0)
		arreter_p32();
	}
	afficherEtatSysteme();
	
}

int Systeme::verif_etat_systeme(){
	
	if( !getM1()->getTankSource()->getEstPlein()
	&&!getM2()->getTankSource()->getEstPlein()
	&&!getM3()->getTankSource()->getEstPlein())
	{
		
		if(getM1()->getTankSource() == getM2()->getTankSource())
		{
			if( !getM1()->getTankSource()->getPompe1()->getEtat() && !getM1()->getTankSource()->getPompe2()->getEtat()){
				if(!getM3()->getTankSource()->getPompe1()->getEtat() || !getM3()->getTankSource()->getPompe2()->getEtat())
					return 1;
			}
		}
		
		
		if(getM1()->getTankSource() == getM3()->getTankSource())
		{
			if(!getM1()->getTankSource()->getPompe1()->getEtat() && !getM1()->getTankSource()->getPompe2()->getEtat()){
				if(!getM2()->getTankSource()->getPompe1()->getEtat() || !getM2()->getTankSource()->getPompe2()->getEtat())
					return 1;
			}
		}
		
		if(getM2()->getTankSource() == getM3()->getTankSource())
		{
			if(!getM2()->getTankSource()->getPompe1()->getEtat() && !getM2()->getTankSource()->getPompe2()->getEtat()){
				if(!getM1()->getTankSource()->getPompe1()->getEtat() || !getM1()->getTankSource()->getPompe2()->getEtat())
					return 1;
			}
		}
		if(!getM1()->getTankSource()->getEstPlein() && 
		  (!getM1()->getTankSource()->getPompe1()->getEtat() 
		 ||!getM1()->getTankSource()->getPompe2()->getEtat()))
		{
			if(!getM2()->getTankSource()->getEstPlein() && 
			  (!getM2()->getTankSource()->getPompe1()->getEtat() 
			 ||!getM2()->getTankSource()->getPompe2()->getEtat()))
			{
				if(!getM3()->getTankSource()->getEstPlein() && 
				  (!getM3()->getTankSource()->getPompe1()->getEtat() 
				 ||!getM3()->getTankSource()->getPompe2()->getEtat()))
					return 1;
			}
		
		}
		
		
	}
	
	return 0;
}


 
void Systeme::reset_systeme(){
	demarrer_p11();
	demarrer_p21();
	demarrer_p31();
	
	arreter_p12();
	arreter_p22();
	arreter_p32();
	
	ouvir_VT12();
	ouvir_VT23();
	Tank1->remplirTank();
	Tank2->remplirTank();
	Tank3->remplirTank();
	M1->changerTankSource(Tank1);
	M2->changerTankSource(Tank2);
	M3->changerTankSource(Tank3);

	ouvrir_V12();
	ouvrir_V13();
	ouvrir_V23();

 }

char *Systeme::getNom(){
	return nom;
}

//Destructeur
 Systeme::~Systeme(){
 	
}

