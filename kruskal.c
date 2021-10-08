#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//este codigo baseada sobre uma squeletta achei no geeksforgeeks

typedef struct {
    int valor;
} Node;

typedef struct {
    int weigth;
    Node *origem;
    Node *destino;
} Edge;