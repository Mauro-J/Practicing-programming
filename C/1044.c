#include <stdio.h>
int main(viod)  {
    int A,B;
    scanf("%d %d",&A,&B);
    if(A%B==0 || B%A==0){
        printf("Sao Multiplos\n");
    }else{
        printf("Nao sao Multiplos\n");
    }
   return 0;
}