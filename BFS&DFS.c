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