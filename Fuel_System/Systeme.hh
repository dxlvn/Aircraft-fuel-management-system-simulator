#ifndef DEF_SYSTEME
#define DEF_SYSTEME

#include "Pompe.hh"
#include "Tank.hh"
#include "Moteur.hh"
#include "VanneMoteur.hh"
#include "VanneTank.hh"
#include <QtGui/QApplication>
#include <QtGui/QPushButton>
#include <QtGui/QGraphicsScene>
#include <QtGui/QGraphicsView>
#include <QtCore/QObject>
#include <string>
#include <stdio.h>
#include <stdlib.h>

class Systeme:public QObject{  
	Q_OBJECT 	//Macro qui doit être ajouté pour utiliser des signaux et des slots
		private:
			//Pompes
			Pompe* p11;
			Pompe* p12;
			Pompe* p21;
			Pompe* p22;
			Pompe* p31;
			Pompe* p32;
			//Tanks
			Tank* Tank1;
			Tank* Tank2;
			Tank* Tank3;
			//Moteurs
			Moteur* M1;
			Moteur* M2;
			Moteur* M3;
			//Vannes Tank-Tank
			VanneTank* VT12;
			VanneTank* VT23;
			//Vannes Tank-Moteur
			VanneMoteur* V12;
			VanneMoteur* V13;
			VanneMoteur* V23;
			char nom[50];
			
		public:
			void reset_systeme(); //remet à jour le système
			
			//Accesseurs
			Pompe* getP11();
			Pompe* getP12();
			Pompe* getP21();
			Pompe* getP22();
			Pompe* getP31();
			Pompe* getP32();

			Tank* getTank1();
			Tank* getTank2();
			Tank* getTank3();

			Moteur* getM1();
			Moteur* getM2();
			Moteur* getM3();

			VanneTank* getVT12();
			VanneTank* getVT23();
			
			VanneMoteur* getV12();
			VanneMoteur* getV13();
			VanneMoteur* getV23();
			
			std::string getNomTankSourceM1();
			std::string getNomTankSourceM2();
			std::string getNomTankSourceM3();
			char *getNom();

			void afficherEtatSysteme();
			Systeme();
			Systeme(Pompe* p11,Pompe* p12,Pompe* p21,Pompe* p22,Pompe* p31,Pompe* p32,Tank* Tank1,Tank* Tank2,Tank* Tank3,Moteur* M1,Moteur* M2,Moteur* M3,VanneTank* VT12,VanneTank* VT23,VanneMoteur* V12,VanneMoteur* V13,VanneMoteur* V23);
			~Systeme();
			
			void EtatPompe(int i);	//méthodes complémentaires ầ l'affichage de létat du système
			void EtatVanne(int i);
			void EtatTank(int i);
		
			public slots:	//methodes qui peuvent réagir à des signaux
			
			//ACTIONS
			int verif_etat_systeme();
		
			
			void fermer_VT12();
			void fermer_VT23();
			void ouvir_VT12();
			void ouvir_VT23();

			void fermer_V12();
			void fermer_V13();
			void fermer_V23();

			void ouvrir_V12();
			void ouvrir_V13();
			void ouvrir_V23();

			void vider_Tank1();
			void vider_Tank2();
			void vider_Tank3();

			void panne_p11();
			void panne_p12();
			void panne_p21();
			void panne_p22();
			void panne_p31();
			void panne_p32();

			void demarrer_p11();
			void demarrer_p12();
			void demarrer_p21();
			void demarrer_p22();
			void demarrer_p31();
			void demarrer_p32();

			void arreter_p11();
			void arreter_p12();
			void arreter_p21();
			void arreter_p22();
			void arreter_p31();
			void arreter_p32();
			void switch_VT23();
			void switch_VT12();
			void switch_V12();
			void switch_V23();
			void switch_V13();
			void switch_pompe_p12();
			void switch_pompe_p22();
			void switch_pompe_p32();

};

#endif 
