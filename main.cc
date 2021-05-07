#include <QtGui/QApplication>
#include <QtGui/QPushButton>
#include <QtGui/QGraphicsScene>
#include <QtGui/QGraphicsView>
#include <QtCore/QObject>
#include "aff.hh"
#include "Fuel_System/Systeme.hh"
#include "exercice.hh"
#include <stdio.h>

 
 
int main(int argc, char *argv[])
{
	char nom[50];	
	printf("Veuillez entrer votre pseudo :... ");
    scanf("%s", nom);
	std::cout<<"votre nom est "<<nom<<std::endl; 
    
    QApplication app(argc, argv);	
	Exercice * ex = new Exercice();
	strcpy(ex->getSys()->getNom(),nom);
	ex->connexion();
	ex->entrainement();
	
	QPushButton Button("Quitter",ex->getAff()->vue);
	Button.setGeometry(0,460,240,35);
	QObject::connect(&Button, SIGNAL(clicked()),&app, SLOT(quit()));

	ex->getAff()->vue->show();
    return app.exec();
}



