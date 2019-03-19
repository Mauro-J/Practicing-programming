#include <stdio.h>
int main()
{
    int X,Y;
    while(1){
        scanf("%d %d",&X,&Y);
        if(X>Y){ printf("Decrescente\n");}
        else if(Y>X){ printf("Crescente\n");}
        else {break;}
   }
    return 0;
}
