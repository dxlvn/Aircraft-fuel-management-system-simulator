#include "aff.hh"

	
Affichage::Affichage():QObject(),scene(){
	V12=false;V23=false;V13=false;VT12=false;VT23=false;
	p12=1; p22=1; p32=1;
	vue = new QGraphicsView(&scene);
	 b1 = new QPushButton("VT12",vue);	//ajout des boutons sur cette vue
    b2 = new QPushButton("VT23", vue);
    b3 = new QPushButton("V12", vue);
    b4 = new QPushButton("V23", vue);
    b5 = new QPushButton("V13", vue);
    b6 = new QPushButton("p12", vue);
    b7 = new QPushButton("p22", vue);
    b8 = new QPushButton("p32", vue);
    b9 = new QPushButton("Exercice suivant", vue);
    b10 = new QPushButton("panneP11", vue);
    b11 = new QPushButton("panneP12", vue);
    b12 = new QPushButton("panneP21", vue);
    b13 = new QPushButton("panneP22", vue);
    b14 = new QPushButton("panneP31", vue);
    b15 = new QPushButton("panneP32", vue);
    b16 = new QPushButton("panneTank1", vue);
    b17 = new QPushButton("panneTank2", vue);
    b18 = new QPushButton("panneTank3", vue);
    b19 = new QPushButton("Entrainement libre", vue);
    b20 = new QPushButton("Exercice", vue);
    b21 = new QPushButton("Afficher le resultat", vue);
   
	}
	
	
Affichage::~Affichage(){}


void Affichage::ajt_vanne_fermee(int X,int Y)
{		QBrush brush(QColor(0,0,0));
		QPen pen(QColor(0,0,0),1,Qt::SolidLine);
		QBrush brush2(Qt::white);
		QPen pen2(Qt::white,1,Qt::SolidLine);
		
		scene.addEllipse(X,Y,37,37,pen,brush);
		QRect rect(X+16,Y+1,5,35);
	
    scene.addRect(rect,pen2,brush2);
	
}

void Affichage::ajt_vanne_ouverte(int X,int Y)
{		QBrush brush(QColor(0,0,0));
		QPen pen(QColor(0,0,0),1,Qt::SolidLine);
		QBrush brush2(Qt::white);
		QPen pen2(Qt::white,1,Qt::SolidLine);
		
		scene.addEllipse(X,Y,37,37,pen,brush);
		QRect rect(X+1,Y+16,35,5);
	
    scene.addRect(rect,pen2,brush2);
	
}


void Affichage::aff_vannes()
{
	ajt_vanne_fermee(405,380);
	ajt_vanne_fermee(555,380);
	ajt_vanne_fermee(555,480);
	ajt_vanne_fermee(555,550);
	ajt_vanne_fermee(405,530);
	
}

void Affichage::ouvrir_VT12()
{	
	if(VT12 == false)
	{
		ajt_vanne_ouverte(405,380);
		VT12 = !VT12;
	}
	else 
	{
		ajt_vanne_fermee(405,380);
				VT12 = !VT12;

	}
}

void Affichage::ouvrir_VT23()
{	
	if(VT23 == false)
	{
		ajt_vanne_ouverte(555,380);
		VT23 = !VT23;
	}
	else 
	{
		ajt_vanne_fermee(555,380);
		VT23 = !VT23;	
	}
}

void Affichage::ouvrir_V13()
{	
	if(V13 == false)
	{
		ajt_vanne_ouverte(555,480);
		V13 = !V13;
	}
	else 
	{
		ajt_vanne_fermee(555,480);
		V13 = !V13;
	}
}

void Affichage::ouvrir_V23()
{	
	if(V23 == false)
	{
		ajt_vanne_ouverte(555,550);
		V23 = !V23;
	}
	else 
	{
		ajt_vanne_fermee(555,550);
		V23 = !V23;
	}
}

void Affichage::ouvrir_V12()
{	
	if(V12 == false)
	{
		ajt_vanne_ouverte(405,530);
		V12 = !V12;
	}
	else 
	{
		ajt_vanne_fermee(405,530);
		V12 = !V12;
	}
}

void Affichage::pompe_on(int X, int Y)
{
		QBrush brush(QColor(0,255,0));
		QPen pen(QColor(0,255,0),1,Qt::SolidLine);
		scene.addEllipse(X,Y,30,30,pen,brush);
	
}
void Affichage::pompe_off(int X, int Y)
{
		QBrush brush(QColor(0,0,0));
		QPen pen(QColor(0,0,0),1,Qt::SolidLine);
		scene.addEllipse(X,Y,30,30,pen,brush);
		
}
void Affichage::pompe_out(int X, int Y)
{
		QBrush brush(QColor(255,0,0));
		QPen pen(QColor(255,0,0),1,Qt::SolidLine);
		scene.addEllipse(X,Y,30,30,pen,brush);
}

void Affichage::aff_pompes()
{
	for(int i = 0; i < 3 ; i++)
	{		
		pompe_on(310 + 150*i,410);
		pompe_off(360 + 150*i,410);
	}
}

void Affichage::switch_pompe_p12(){
	if(p12 == 1){
		pompe_on(360,410);
		p12 = !p12;}
		
	else {
		if(p12 == 0){
			pompe_off(360,410);
			p12 = !p12;
		}
	}
}
void Affichage::switch_pompe_p22(){
	if(p22 == 1){
		pompe_on(510,410);
		p22 = !p22;}
		
	else {
		if(p22 == 0){
			pompe_off(510,410);
			p22 = !p22;
		}
	}
	
}
void Affichage::switch_pompe_p32(){
	if(p32 == 1){
		pompe_on(660,410);
		p32 = !p32;}
		
	else {
		if(p32 == 0)
		{
			pompe_off(660,410);
			p32 = !p32;
		}
	}
	
}
void Affichage::panne_p11(){
	pompe_out(310,410);
} 
void Affichage::panne_p12(){
	pompe_out(360,410);
	p12 = 2;
} 
void Affichage::panne_p21(){
	pompe_out(460,410);
} 
void Affichage::panne_p22(){
	pompe_out(510,410);
	p22 = 2;
} 
void Affichage::panne_p31(){
	pompe_out(610,410);
} 
void Affichage::panne_p32(){
	pompe_out(660,410);
	p32 = 2;
} 

void Affichage::Tank1Vide(){
	QPolygon polygon;
	polygon << QPoint(300,375) << QPoint(300,450) << QPoint(400,450)<< QPoint(400,300);
	QBrush brush(QColor(255, 125, 0));
	QPen pen(QColor(255, 125, 0),1,Qt::SolidLine);
    scene.addPolygon(polygon,pen,brush);
}

void Affichage::Tank2Vide(){
	 QRect rectangle2(450,300,100,150);
	QBrush brush2(QColor(255, 125, 0));
	QPen pen2(QColor(255, 125, 0),1,Qt::SolidLine);
    scene.addRect(rectangle2,pen2,brush2);
}
void Affichage::Tank3Vide(){
	QPolygon polygon3;
	polygon3 << QPoint(600,300) << QPoint(600,450) << QPoint(700,450)<< QPoint(700,375);
	QBrush brush3(QColor(255, 125, 0));
	QPen pen3(QColor(255, 125, 0),1,Qt::SolidLine);
    scene.addPolygon(polygon3,pen3,brush3);
}
void Affichage::Tank1Plein(){
	QPolygon polygon;
	polygon << QPoint(300,375) << QPoint(300,450) << QPoint(400,450)<< QPoint(400,300);
	QBrush brush(QColor(0, 125, 0));
	QPen pen(QColor(0, 125, 0),1,Qt::SolidLine);
    scene.addPolygon(polygon,pen,brush);
}

void Affichage::Tank2Plein(){
	 QRect rectangle2(450,300,100,150);
	QBrush brush2(QColor(0, 125, 0));
	QPen pen2(QColor(0, 125, 0),1,Qt::SolidLine);
    scene.addRect(rectangle2,pen2,brush2);
}
void Affichage::Tank3Plein(){
	QPolygon polygon3;
	polygon3 << QPoint(600,300) << QPoint(600,450) << QPoint(700,450)<< QPoint(700,375);
	QBrush brush3(QColor(0, 125, 0));
	QPen pen3(QColor(0, 125, 0),1,Qt::SolidLine);
    scene.addPolygon(polygon3,pen3,brush3);
}

void Affichage::init_scene()
{
		 vue->setFixedSize(700,500);
//Tank1
    QPolygon polygon;
	polygon << QPoint(300,375) << QPoint(300,450) << QPoint(400,450)<< QPoint(400,300);
	QBrush brush(QColor(0, 125, 0));
	QPen pen(QColor(255, 125, 0),1,Qt::SolidLine);
    scene.addPolygon(polygon,pen,brush);
    
//Tank2

    QRect rectangle2(450,300,100,150);
	QBrush brush2(QColor(0, 125, 0));
	QPen pen2(Qt::green,1,Qt::SolidLine);
    scene.addRect(rectangle2,pen2,brush2);
   QRect rectangle6(0,300,0,0);
   scene.addRect(rectangle6,pen2,brush2);
//Tank 3
	QPolygon polygon3;
	polygon3 << QPoint(600,300) << QPoint(600,450) << QPoint(700,450)<< QPoint(700,375);
	QBrush brush3(QColor(0, 125, 0));
	QPen pen3(Qt::green,1,Qt::SolidLine);
    scene.addPolygon(polygon3,pen3,brush3);
     
     
//Moteurs 1,2,3 
    for(int i = 0; i < 3; i++)
	{
	QLine ligne3(350 +i*150,450,350 +i*150, 600);
	scene.addLine(ligne3);
	QRect rect(330+i*150,600,40,100);
	QBrush brush4(QColor(125, 125, 125));
	QPen pen4(QColor(125, 125, 125),1,Qt::SolidLine);
    scene.addRect(rect,pen4,brush4);
	}
    
    for(int i = 0; i < 2; i++)
	{
	QLine ligne(400 +i*150,400,450 +i*150,400);
	scene.addLine(ligne);
	QLine ligne2(350 +i*150,550+i*20,500 +i*150,550+i*20);
	scene.addLine(ligne2);
	QPen pen(Qt::black, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
	QLine ligne3(350 +i*150,500,500 +i*150,500);
	scene.addLine(ligne3,pen);
	}
//Pompes
	aff_pompes();
//Vannes
	aff_vannes();		
    
//Tableau de bord
  //fenetre->setFixedSize(255,200);
  
   
    b1->setGeometry(5,0,120,35);	//redimensionne les boutons
    b2->setGeometry(130,0,120,35);
    b3->setGeometry(0,40,80,35);
    b4->setGeometry(85,40,80,35);
    b5->setGeometry(170,40,80,35);
    b6->setGeometry(0,80,80,35);
    b7->setGeometry(85,80,80,35);
    b8->setGeometry(170,80,80,35);
    b9->setGeometry(5,120,240,35);
    b10->setGeometry(5,160,80,35);
    b11->setGeometry(85,160,80,35);
    b12->setGeometry(170,160,80,35);
    b13->setGeometry(5,200,80,35);
    b14->setGeometry(85,200,80,35);
    b15->setGeometry(170,200,80,35);
    b16->setGeometry(5,240,80,35);
    b17->setGeometry(85,240,80,35);
    b18->setGeometry(170,240,80,35);
    b19->setGeometry(0,280,240,35);
    b20->setGeometry(0,320,240,35);
    b21->setGeometry(0,120,240,35);

}

Affichage& Affichage::reset(){
	V12=false;V23=false;V13=false;VT12=false;VT23=false;
	p12=1; p22=1; p32=1;
	return *this;
}

void Affichage::HideBoutons(){
	
	b9->setVisible(true);
	b10->setVisible(false);
    b11->setVisible(false);
    b12->setVisible(false);
    b13->setVisible(false);
    b14->setVisible(false);
    b15->setVisible(false);
    b16->setVisible(false);
    b17->setVisible(false);
    b18->setVisible(false);
    b19->setVisible(true);
    b20->setVisible(false);
    b21->setVisible(false);
}
void Affichage::DisplayBoutons(){
	b9->setVisible(false);
	b10->setVisible(true);
    b11->setVisible(true);
    b12->setVisible(true);
    b13->setVisible(true);
    b14->setVisible(true);
    b15->setVisible(true);
    b16->setVisible(true);
    b17->setVisible(true);
    b18->setVisible(true);
    b19->setVisible(false);
    b20->setVisible(true);
    b21->setVisible(false);
}
		
