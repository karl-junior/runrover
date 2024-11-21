//
// Created by junio on 21/11/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

t_list createAvaileList() {
    t_list list;
    list.head = NULL;
    return list;
}

t_cell *createcell(int move) {
    if (move > 7) {
        //printf("error");
        return NULL;
    }
    t_cell *cell;
    cell = (t_cell*)malloc(sizeof(t_cell));
    if (cell == NULL) {
        exit(EXIT_FAILURE);
    }
    cell->next = NULL;
    cell->move = move;
    return cell;
}

/*void addheadlist(t_list* list, int move) {
    t_cell *cell = createcell(move);
    if (list == NULL) {
        list->head = cell;
    }
    else {t_cell*
    }
}*/