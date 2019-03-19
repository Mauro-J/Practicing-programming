#include <stdio.h>
int main()
{
    int i,C,M[1001],j=0;
    float N,media=0,acima;
    scanf("%d",&C);
    for(;C>0;C--){
        scanf("%f",&N);
        for(i=0;i<N;i++){
            scanf("%d",&M[i]);
            media+=M[i];
        }
        media=media/N;
        for(i=0;i<N;i++){
            if(M[i]>media){
                j++;
            }
        }
        media=0;
        acima = (100*j)/N;
        printf("%.3f%%\n",acima);
        acima=0;
        j=0;
    }
    return 0;
}
