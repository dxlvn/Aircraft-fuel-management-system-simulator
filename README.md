#exercice.hh

void init_systeme();
		//Accesseurs
		Systeme * getSys();
		Affichage * getAff();
		
		//Permet de connecter les boutons à différente méthodes our ouvoir intéragir avec le système
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

#aff.hh

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
		
#Systeme.hh

			void reset_systeme();
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
			
			//creer signal pour switch etat pannes
			//afficher tank specifique moteur
			
			
			void EtatPompe(int i);
			void EtatVanne(int i);
			void EtatTank(int i);
			public slots:	//methodes qui peuvent reagir a des signaux
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
