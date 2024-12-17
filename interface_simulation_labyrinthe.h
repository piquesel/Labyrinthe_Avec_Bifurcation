#ifndef INTERFACE_SIMULATION_LABYRINTHE_H
#define INTERFACE_SIMULATION_LABYRINTHE_H

#include "modelisation_robot_labyrinthe.h"

enum Type_labyrinthe {SANS_BIFURCATION, SANS_BOUCLE, CAS_GENERAL};
typedef enum Type_labyrinthe Type_labyrinthe;

/* Initialiser le problème du labyrinthe.
 * Doit être appelé une seule fois par simulation, et avant toute occurrence
 * de est_voie_libre().
 *
 * ENTRÉES
 * type de labyrinthe et pointeurs sur positions; à la sortie de
 * l'algorithme, ces positions seront les positions de départ et d'arrivée du
 * problème.
 *
 * SORTIE
 * la direction initiale qui mène à la position de départ */
Direction initialiser_labyrinthe(Type_labyrinthe, Position* depart,
    Position* arrivee, int nouveau_tirage);

/* Vérifier si la voie est libre depuis la position donnée dans la direction
 * donnée. */
int est_voie_libre(const Position*, Direction);

/* Afficher l'avancée dans le labyrinthe, depuis la position actuelle donnée et
 * dans la direction donnée. */
void afficher_avancer_labyrinthe(const Position* position,
    Direction direction);
#endif
