#include <stdio.h>
int main()
{
    int X, c;
    float n, s;
    do{
        c=0;
        s=0.0;
        while(c<2)
        {
            scanf("%f", &n);
            if(n>=0.0 && n<=10.0)
            {
                c++;
                s = s + n;
            }
            else
            {
                printf("nota invalida\n");
            }
        }
        printf("media = %.2f\n", s/2.0);
        do{

            printf("novo calculo (1-sim 2-nao)\n");

            scanf("%d", &X);

        }while(X!=1 && X!=2);

    }while(X!=2);

return 0;
}
