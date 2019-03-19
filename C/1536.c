#include <stdio.h>
int main()
{
    int t1,t2,j=0,i=0,N,M,V,t1v=0,t2v=0;
    printf("Caso teste: ");
    scanf("%d",&N);
    do{
        while(j<2){
            printf("Placar: ");
            scanf("%d x %d",&M,&V);
            j++;
            if(j==1){
                t1 = M;
                t2 = V;
                t2v = V;
            }else if(j==2){
                t1 = t1 + V;
                t2 = t2 + M;
                t1v = V;
                if(t1==t2){
                    if(t1v>t2v){
                        printf("Time 1\n");
                    }else if(t1v<t2v){
                        printf("Time 2\n");
                    }else{
                        printf("Penaltis\n");
                    }
                }else if(t1>t2){
                    printf("Time 1\n");
                }else if(t1<t2){
                    printf("Time 2\n");
                }
            }
        }
        j=0;
        i++;
    }while(i<N);
    return 0;
}
