#ifndef PILE_H
#define PILE_H

#include "modelisation_robot_labyrinthe.h"

// Structure pour représenter une cellule de la pile
typedef struct Pile
{
    Position pos;         // Position du robot
    Direction dir;        // Direction actuelle
    struct Pile *suivant; // Pointeur vers la cellule suivante
} Pile;

// Fonctions pour manipuler la pile
void empiler(Pile **pile, Position pos, Direction dir);
Pile *depiler(Pile **pile);

#endif
