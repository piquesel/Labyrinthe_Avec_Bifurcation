#ifndef LISTE_CHAINEE_H
#define LISTE_CHAINEE_H

#include "modelisation_robot_labyrinthe.h"

// Structure pour une cellule de la liste chaînée
typedef struct Cellule
{
    Position pos;            // Position dans le labyrinthe
    Direction dir;           // Direction à partir de la position
    struct Cellule *suivant; // Pointeur vers la cellule suivante
} Cellule;

// Fonctions pour manipuler la liste chaînée
void inserer_tete(Cellule **tete, Position pos, Direction dir);
Cellule *extraire_tete(Cellule **tete);

#endif
