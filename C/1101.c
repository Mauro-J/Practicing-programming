#include <stdio.h>
int main()
{
    int i,M,N,m,soma=0;
    for(;;){
        scanf("%d %d",&M,&N);
        if(M<=0 || N<=0)    break;
        m=M;
        if(M>N){
            m=N;
            N=M;
        }
        for(i=m;i<=N;i++){
            soma+=i;
        printf("%d ",i);
        }
        printf("Sum=%d\n",soma);
        soma=0;
    }
    return 0;
}
