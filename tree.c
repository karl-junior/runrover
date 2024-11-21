//
// Created by junio on 21/11/2024.
//
#include <stdio.h>
#include "tree.h"

#include "map.h"


t_node *createNode(int cost, int nbsons) {
    t_node *newnode;
    newnode = (t_node *)malloc(sizeof(t_node));
    if (newnode == NULL) {
        exit(EXIT_FAILURE);
    }
    newnode->depth = 0;
    newnode->cost = cost;
    newnode->nbsons = nbsons;
    newnode->sons = (t_node **)malloc(nbsons * sizeof(t_node *));
    if (newnode->sons == NULL) {
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < nbsons; i++) {
        newnode->sons[i] = NULL;
    }
    newnode->parent = NULL;newnode->parent = NULL;
    newnode->availe = createAvaileList();
    return newnode;
}