#include <stdio.h>
int main()
{
    int C,A=0,G=0,D=0;
    printf("MUITO OBRIGADO\n");
    do{
        do{
            scanf("%d",&C);
        }while(C<1 && C<4);
        switch(C){
    case 1:
        A++;
        break;
    case 2:
        G++;
        break;
    case 3:
        D++;
        break;
    case 4:
        break;
        }

    }while(C!=4);
    printf("Alcool: %d\n",A);
    printf("Gasolina: %d\n",G);
    printf("Diesel: %d\n",D);
    return 0;
}
