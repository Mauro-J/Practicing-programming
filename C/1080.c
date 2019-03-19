#include <stdio.h>

int main()  {
    int i,vet[101],a=0,b=0;
    for(i=1;i<=100;i++){
        scanf("%d",&vet[i]);
        if(vet[i]>a){
            a=vet[i];
            b=i;
        }
    }
    printf("%d\n%d\n",a,b);

    return 0;
}
