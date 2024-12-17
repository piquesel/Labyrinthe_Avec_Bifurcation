#ifndef NAVIGATION_H
#define NAVIGATION_H

#include <stdio.h>
#include <stdlib.h>
#include "interface_simulation_labyrinthe.h"
#include "liste_chainee.h"
#include "pile.h"

// Fonction pour lister les directions possibles à partir d'une position donnée
void lister_directions_possibles(Position *pos, Direction dir_precedente, Cellule **liste_directions);

// Fonction pour avancer d'une case dans une direction donnée
void avancer(Position *pos, Direction dir);

// Fonction pour déterminer la prochaine direction sans bifurcation
Direction determiner_prochaine_direction(Position *pos, Direction dir_precedente);

// Fonction principale pour résoudre le labyrinthe sans bifurcation
void resoudre_labyrinthe_sans_bifurcation(Position depart, Position arrivee, Direction dir_initiale);

// Fonction pour résoudre le labyrinthe avec bifurcations
void resoudre_labyrinthe_avec_bifurcations(Position depart, Position arrivee, Direction dir_initiale);

#endif
