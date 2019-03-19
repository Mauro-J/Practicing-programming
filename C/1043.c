#include <stdio.h>
int main()  {
    float A,B,C,Perimetro,area;
    scanf("%f %f %f",&A,&B,&C);
    if(( A < (B + C)) && (B < (A + C)) && (C < (A + B)))
    {
        printf("Perimetro = %.1f\n",A+B+C);
    }
    else
    {
        area = ((A+B)*C)/2;
        printf("Area = %.1f\n",area);
    }
    return 0;
}
