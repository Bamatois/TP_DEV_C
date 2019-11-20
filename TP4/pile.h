#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED
typedef struct Piles
{
    int size_pile;
    int nb_elmts;
    int* elmts;
}Pile;

Pile* create_pile (int maxsize);
void trash_pile (Pile* pilename);
int add_elmt (Pile* pilename , int value);
int delete_elmt (Pile* pilename);
int get_top_elmt (Pile* pilename)


#endif // PILE_H_INCLUDED
