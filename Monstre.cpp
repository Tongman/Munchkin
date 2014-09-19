#include "Monstre.h"

Monstre::Monstre(Effet * e, int niv, int nbT){
	incident=e;
	niveau=niv;
	tresors=nbT;
	nbNiv=1;
	
}

Monstre::Monstre(Effet * e, int niv, int nbT, int nbN){
	incident=e;
	niveau=niv;
	tresors=nbT;
	nbNiv=nbN;	
}

Monstre::~Monstre(){
	
	
}