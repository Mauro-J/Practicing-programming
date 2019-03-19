#include <stdio.h>
#include <string.h>
int main()  {
    int i,N,quantia,totalCoelhos = 0,totalRatos = 0,totalSapos = 0,total;
    char cobaias[3];
    scanf("%d",&N);
    for(i=0;i<N;i++){
       scanf("%d %s",&quantia, cobaias);

       if(strcmp(cobaias,"C")==0){
           totalCoelhos+=quantia;
       }
       else if(strcmp(cobaias,"R")==0){
           totalRatos+=quantia;
       }
       else if(strcmp(cobaias,"S")==0){
           totalSapos+=quantia;
       }
       total = totalCoelhos + totalRatos + totalSapos;
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",totalCoelhos);
    printf("Total de ratos: %d\n",totalRatos);
    printf("Total de sapos: %d\n",totalSapos);
    printf("Percentual de coelhos: %.2f %%\n", (float)( totalCoelhos * 100 )/total);
    printf("Percentual de ratos: %.2f %%\n", (float)(totalRatos*100)/total);
    printf("Percentual de sapos: %.2f %%\n", (float)(totalSapos*100)/total);
    return 0;
}
