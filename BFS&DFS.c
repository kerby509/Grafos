#include <stdio.h>
#include <stdlib.h>


int a[20][20], q[20], visitado[20];
int i, j,n, f=0, r=-1;

void bfs(int v){
  for (i=0; i<n; i++){
    if(a[v][i] && !visitado[i]){
      q[++r]=i;
    }
    if(f<=r){
      //visitando[q][f]=1;
      bfs(q[++f]);
    }
  }
}

int main(void) {
  int v;
  printf("Digite o numero de vertice: \n");
  scanf("%d",&n);
  printf("Digite a matrice adjacencia: \n");

  for( i=0; i<n; i++){
    for( j=0 ; j<n; j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("Digite a matrice inicial: \n");
  scanf("%d",&v);
  printf("Lista dos nodos: \n");
  for( i=0; i<n; i++){
   // if(visitado[i])
    printf("%d\t \n",i);
  }

   int origin = -1;
        while(origin == -1){
        printf("Insira o vértice inicial para buscar: ");
        scanf("%d", &origin);

        if(origin >= n || origin < 0){
            printf(" Insira um vértice válido!\n");
            origin = -1;
        }

         int destiny = -1;
      while(destiny == -1){
      printf("Insira o vértice que você deseja buscar: ");
      scanf("%d", &destiny);

      if(destiny >= n || destiny < 0){
          printf(" Insira um vértice válido!\n");
          destiny = -1;
        }
    }
    
  //bfs(v);

  // Não consigo terminar a parte DFS neste código pois implementei a parte BFS
  

  return 0;
    }




}