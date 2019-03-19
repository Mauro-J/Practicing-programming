#include <stdio.h>

int main()  {
    int num,pares=0,i=0;
    for(;i<5;i++){
        scanf("%d",&num);
        if((num%2)==0){
            pares++;
        }
    }
    printf("%d valores pares\n",pares);
    return 0;
}
