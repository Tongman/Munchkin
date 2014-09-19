#ifndef JOUEUR_H
	#define JOUEUR_H

#include "Personnage.h"

class Joueur:public Personnage{
	private:
		
	public:
		Joueur();
		~Joueur();
		int getNiveau();
	
};


#endif