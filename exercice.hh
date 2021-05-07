#ifndef DEF_EXERCICE
#define DEF_EXERCICE


#include <QtGui/QApplication>
#include <QtGui/QPushButton>
#include <QtGui/QGraphicsScene>
#include <QtGui/QGraphicsView>
#include <QtCore/QObject>
#include <iostream>
#include "aff.hh"
#include "ProjetC++/Systeme.hh"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Classe contenant l'entrainement et les exercices du simulateur

class Exercice:public QObject{
	Q_OBJECT		//Macro qui doit être ajouté pour utiliser des signaux et des slots
	private:
		Affichage * aff;	//Contient les éléments graphiques
		Systeme * sys;		
		int num_exercice  = 1;		//Compteur les exercices
		int note = 0;				//attribut qui sert à evaluer la note
		
	public :
		Exercice();
		~Exercice();
		void init_systeme();
		//Accesseurs
		Systeme * getSys();
		Affichage * getAff();
		
		//Permet de connecter les bouotns à différente méthodes our ouvoir intéragir avec le système
		void connexion();
		
		//Pour compter le nombre d'exercice effectué par le pilote
		int compter_lignes(FILE * fichier);
	
		
	public slots:
	
	//Méthode qui mettent en panne le système et qui l'affiche
		void panne_p11();
		void panne_p12();
		void panne_p21();
		void panne_p22();
		void panne_p31();
		void panne_p32();
		
		void vider_Tank1();
		void vider_Tank2();
		void vider_Tank3();
		
	//Different exercices du simulateur
		void exercice1();
		void exercice2();
		void exercice3();
		void exercice4();
		void exercice5();
	//Méthode passant à l'exercice suivant 
		void changer_exercice();
	//Permet de noter chaque fois qu'on passe à l'exo suivant 
		void noter();
	//Méthodes qui sauvegarde la note dans un fichier qui contient l'historique des entrainement déjà effectués
		void sauvegarde();
	//Permet de passer en mode entraînement
		void entrainement();
	//Affiche les résultats
		void AfficherResultat();
	//Affiche le systeme en fonction de etat
		void afficherSysteme();

};



#endif 
