//
// Created by junio on 21/11/2024.
//

#ifndef LIST_H
#define LIST_H
#include "moves.h"

typedef struct s_cell {
    t_move move;
    struct s_cell *next;
}t_cell;

typedef struct s_list {
    t_cell* head;
}t_list;

t_cell *createcell(int move);
t_list createAvaileList();
void addheadlist(t_list*);

#endif //LIST_H
