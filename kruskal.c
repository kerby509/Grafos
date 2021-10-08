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

struct list_edges{
    Edge *edge;
    struct list_edges *prev;
    struct list_edges *next;
};

typedef struct list_edges Edges;

struct tabela_edges{
    Edges * head;
    Edges * tail;
};

typedef struct tabela_edges Tab;

void insira(Node * origem, Node * destino, int weigth, Tab * tabela){
    Edge * newEdge = malloc(sizeof(Edge));
    newEdge->origem = origem;
    newEdge->destino = destino;
    newEdge->weigth = weigth; 

    Edges * addEdge = malloc(sizeof(Edges));
    addEdge->edge = newEdge;
    addEdge->next = NULL;
    addEdge->prev = NULL;
     if(tabela->head == NULL && tabela->tail == NULL){
        addEdge->next = NULL;
        addEdge->prev = NULL;
        tabela->head = addEdge;
        tabela->tail = addEdge;
    }
     else{
        Edges * aux = tabela->tail;
        
        
        if(newEdge->weigth >= aux->edge->weigth){
            aux->next = addEdge;
            addEdge->prev = aux;
            addEdge->next = NULL;
            tabela->tail = addEdge;
        }
        else{
            do{
                
                if(aux == tabela->head && newEdge->weigth < aux->edge->weigth){
                    addEdge->prev = NULL;
                    addEdge->next = aux;
                    aux->prev = addEdge;
                    tabela->head = addEdge;
                    break;
                }

}