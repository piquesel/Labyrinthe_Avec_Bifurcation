#ifndef MODELISATION_ROBOT_LABYRINTHE_H
#define MODELISATION_ROBOT_LABYRINTHE_H

typedef int Coordonnee;

struct Position
{
    Coordonnee x, y;
};
typedef struct Position Position;

enum Direction
{
    NORD,
    SUD,
    EST,
    OUEST
};
typedef enum Direction Direction;

#endif
