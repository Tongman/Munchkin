#ifndef JOUEUR_H
	#define JOUEUR_H

#include "Personnage.h"
#include <vector>

class Joueur:public Personnage{
	private:
		vector <Carte> * main;
		vector <Equipement> * bagage;
		vector <Equipement> * equipe;
	public:
		Joueur();
		~Joueur();
		void pioche();
		void poseEquipement(Equipement e);
		void equiper(Equipement e);
		void desequiper(Equipement e);
		
	
};


#endif