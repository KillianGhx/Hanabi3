/*
 * Game.h
 *
 *  Created on: 24 févr. 2017
 *      Author: ubuntu
 */

#ifndef GAME_H_
#define GAME_H_
#include "Plateau.h"
#include "Joueur.h"

class Game{
private:
	Plateau plateau;
	vector<Joueur> joueurs;
	int nombre_joueur;
	int nbcartesmain;
public :
	Game();
	Game(int nb_joueur,int nbcartes,int seed, bool save, bool ia);
	Carte piocher();
	void defausser();
	void poser();
	void afficherJoueur();
	vector<double> gameState(int index,int compteur);
};




#endif /* GAME_H_ */
