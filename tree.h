//
// Created by junio on 20/11/2024.
//

#ifndef TREE_H
#define TREE_H
#include <stdlib.h>

#include "moves.h"
#include "list.h"

typedef struct s_node {
    int depth;
    int cost;
    struct s_node **sons;
    struct s_node *parent;
    int nbsons;
    t_list availe;
}t_node;

typedef struct s_tree {
    t_node *root;
}t_tree;


t_node *createNode(int , int );

#endif //TREE_H
