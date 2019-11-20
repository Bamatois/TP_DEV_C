#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int main()
{
    Pile* test =create_pile(10);            // creation d'une pile vide de taille max 10
    add_elmt(test,5);                       //ajout de l'élément à la pile
    printf("valeur : %d",test->elmts[0]);

    return 0;
}
