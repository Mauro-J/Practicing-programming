#include <stdio.h>
int main()
{
    float S=0,i;
    for(i=1;i<=100;i++){
        S =i + 1/((i+1)+1);
    }
    printf("%.2f",S/i);
    return 0;
}
