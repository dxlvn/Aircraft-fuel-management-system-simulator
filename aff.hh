#ifndef DEF_AFFICHAGE
#define DEF_AFFICHAGE


#include <QtGui/QApplication>
#include <QtGui/QPushButton>
#include <QtGui/QGraphicsScene>
#include <QtGui/QGraphicsView>
#include <QtCore/QObject>


class Affichage:public QObject{
	Q_OBJECT		//Macro qui doit être ajouté pour utiliser des signaux et des slots
	public:
		bool V12,V23,V13,VT12,VT23;	//Permet de savoir si une vanne est ouverte ou non
		int p12,p22,p32; 		//Etat d'une pompe voir Pompe.hh
		QGraphicsScene scene;	//Classe qui contient tout les objet de l'affichage
		QGraphicsView *vue; //Classe qui va afficher l'objet scene
		
		//Boutons de l'affichage
		QPushButton *b1 ;
		QPushButton *b2;
		QPushButton *b3;
		QPushButton *b4 ;
		QPushButton *b5;
		QPushButton *b6;
		QPushButton *b7;
		QPushButton *b8 ;
		QPushButton *b9;
		
		
		QPushButton *b10;
		QPushButton *b11;
		QPushButton *b12;
		QPushButton *b13;
		QPushButton *b14;
		QPushButton *b15;
		QPushButton *b16;
		QPushButton *b17;
		QPushButton *b18;
		
		QPushButton *b19;
		QPushButton *b20;
		QPushButton *b21;
		
		Affichage();		
		Affichage(Affichage& aff);
		~Affichage();
		void init_scene();		//Permet d'initialiser une fenêtre graphique
		
		void ajt_vanne_fermee(int X,int Y);		//Affiche une vanne fermée aux coordonnées X et Y
		void ajt_vanne_ouverte(int X,int Y);	//Affiche une vanne ouverte aux coordonnées X et Y
		void aff_vannes();	//Affiche toute les vannes en état fermé
		
		void pompe_on(int X, int Y);	//Affiche une pompe en marche aux coordonnées X et Y
		void pompe_off(int X, int Y);	//Affiche une pompe en arrêt aux coordonnées X et Y
		void pompe_out(int X, int Y);	//Affiche une pompe en panne aux coordonnées X et Y
		void aff_pompes();				//Affiche les pompes du système de base 
		Affichage& reset();				//réinitialise les attributs permettant de connaître l'etat
		
		void DisplayBoutons();		//Affiche les boutons du mode entraînement
		void HideBoutons();			//Cache les boutons du mode entraînement
	
	void setEtat(bool etat);
	 public slots: //Les méthodes déclarées comme slot peuvent réagir à un signal comme le clic d'un  bouton
		
		//Méthodes permettant d'afficher les composants dans différents états
		void ouvrir_V13();
		void ouvrir_V23();
		void ouvrir_V12();
		void ouvrir_VT12();
		void ouvrir_VT23();
		void switch_pompe_p12();
		void switch_pompe_p22();
		void switch_pompe_p32();
		//methodes d'affichage des pannes
		void panne_p11();
		void panne_p12();
		void panne_p21();
		void panne_p22();
		void panne_p31();
		void panne_p32();
		void Tank1Vide();
		void Tank2Vide();
		void Tank3Vide();
		void Tank1Plein();
		void Tank2Plein();
		void Tank3Plein();
		
};



#endif 
