#include <stdio.h>
int main()
{
    float media=0;
    int N=0,i=0;
    do{
        media = media + N;
        scanf("%d",&N);
        i++;
    }while(N>0);
    printf("%.2f\n",media/(i-1));
    return 0;
}
