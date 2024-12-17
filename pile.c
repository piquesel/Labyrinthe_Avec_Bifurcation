#include "pile.h"
#include <stdlib.h>
#include <stdio.h>

// Fonction pour empiler une nouvelle position dans la pile
void empiler(Pile **pile, Position pos, Direction dir)
{
    Pile *nouvelle_cellule = (Pile *)malloc(sizeof(Pile));
    if (nouvelle_cellule == NULL)
    {
        printf("Erreur d'allocation mémoire\n");
        exit(1);
    }
    nouvelle_cellule->pos = pos;
    nouvelle_cellule->dir = dir;
    nouvelle_cellule->suivant = *pile;
    *pile = nouvelle_cellule;
}

// Fonction pour dépiler une position de la pile
Pile *depiler(Pile **pile)
{
    if (*pile == NULL)
    {
        return NULL; // Pile vide
    }
    Pile *temp = *pile;
    *pile = temp->suivant;
    return temp;
}
