#ifndef EFFET_H
	#define EFFET_H
	
#include "Personnage.cpp"
#include <cstddef>
	
class Effet{
	public:
		Effet(int valeur);
		~Effet();
		Personnage * cible;
	protected:
		int val;
};


#endif