#include <stdio.h>

int main()  {
    int num,pares=0,i=0,impares=0,positivos=0,negativos=0;
    for(;i<5;i++){
        scanf("%d",&num);
        if((num%2)==0)  pares++;
        else            impares++;
        if(num>0)       positivos++;
        if(num<0)       negativos++;
    }
    printf("%d valor(es) par(es)\n",pares);
    printf("%d valor(es) impar(es)\n",impares);
    printf("%d valor(es) positivo(s)\n",positivos);
    printf("%d valor(es) negativo(s)\n",negativos);
    return 0;
}
