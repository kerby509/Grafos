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
        if(i == visitado && visitado > -1 && visitado < n){
            printf(" ← visitado");
        }
        printf("\n");
    }
}

int smallest(int **matTab, int n){
    int menor = INT_MAX;
    int pos;
    for(int i = 0; i<n; i++){
        if (matTab[i][1] != 1 && matTab[i][2] < menor){
            menor = matTab[i][2];
            pos = i;
        }
    }
     if(menor == INT_MAX){
        return -1;
    }
    return pos;

}

void prim(int **matAdj, int **matTab, int n, int startValue){
    int i = startValue;
    matTab[i][2] = 0;
    while(i < n){
        printf("\n\n****************************** Visitando o vértice %d ******************************\n\n", i);
        matTab[i][1] = 1;

        for(int j = 0; j < n; j++){
            if(matAdj[i][j] != 0 && matTab[j][1] != 1 && matAdj[i][j] < matTab[j][2]){
                matTab[j][2] = matAdj[i][j];
                matTab[j][3] = i;
            }
        }



}
