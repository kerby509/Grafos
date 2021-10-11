#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// aqui estou printando os valores
void printPrim(int **matTab, int n, int visitado){
    printf("\tver\t|\tvis\t|\tval\t|\tant\t|\n");
    printf("----------------+---------------+---------------+---------------|\n");
        for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            if(matTab[i][j] == INT_MAX){
                printf("\tINF\t|");
            }
            else{
                printf("\t%d\t|", matTab[i][j]);
            }
        }
