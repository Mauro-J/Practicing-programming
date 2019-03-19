#include <stdio.h>
int main()
{
    float i,I,J;
    for(I=0;I<=2.2;I=I+0.2)
    {
        for(J=1.0;J<=3.0;J++){
            printf ("I=%g ",I);
            for(i=0;i<=1.0;i=i+0.2){
                printf("J=%g\n",J);
            }

        }
    }
    return 0;
}
