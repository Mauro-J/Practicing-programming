#include <stdio.h>

int main()  {
    int N,menor,i,vet;
    scanf("%d",&N);
    int X[N];
    menor = X[0];
    for(i=0;i<N;i++){
        scanf("%d",&X[i]);
        if(X[i]<menor){
            menor = X[i];
            vet= i;
        }
    }
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",vet);

    return 0;
}
