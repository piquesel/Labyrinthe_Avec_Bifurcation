#include "liste_chainee.h"
#include <stdlib.h>
#include <stdio.h>

// Fonction pour insérer une cellule à la tête de la liste
void inserer_tete(Cellule **tete, Position pos, Direction dir)
{
    Cellule *nouvelle_cellule = (Cellule *)malloc(sizeof(Cellule));
    if (nouvelle_cellule == NULL)
    {
        printf("Erreur d'allocation mémoire\n");
        exit(1);
    }
    nouvelle_cellule->pos = pos;
    nouvelle_cellule->dir = dir;
    nouvelle_cellule->suivant = *tete;
    *tete = nouvelle_cellule;
}

// Fonction pour extraire la tête de la liste
Cellule *extraire_tete(Cellule **tete)
{
    if (*tete == NULL)
    {
        return NULL; // Liste vide
    }
    Cellule *temp = *tete;
    *tete = temp->suivant;
    return temp;
}
