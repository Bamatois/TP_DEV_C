#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

Pile* create_pile (int maxsize)// creation pile de taille maxsize , retourne l'addresse de la pile créée
{
    int* elmts= malloc(maxsize*sizeof(int));
    Pile newpile = {maxsize,0,elmts};
 return &newpile;
}

void trash_pile (Pile* pilename)// destruction de la structure et de son tableau de données.
{
    free(pilename->elmts);
    free(pilename);
}

int add_elmt (Pile* pilename , int value)//ajout de l'élément à la pile
{
    if (pilename->nb_elmts < pilename->size_pile)   // verif pile non pleine
    {
        pilename->elmts[pilename->nb_elmts] = value;
        pilename->nb_elmts++;
        return 0;
    }else return -1;
}

int delete_elmt (Pile* pilename)
{
    if (pilename->nb_elmts > 0)     // verif pile non vide
    {
        pilename->nb_elmts--;
        pilename->elmts[pilename->nb_elmts] = 0;
        return 0;
    }else return -1;
}
int get_top_elmt (Pile* pilename)
{
    if (pilename->nb_elmts !=0)
    {
      printf("Le sommet est :%d",pilename->elmts[pilename->nb_elmts - 1])
      return 0;
    }else return -1;
}


