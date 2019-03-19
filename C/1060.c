#include <stdio.h>

int main()  {
    float num[7];
    int positivos=0,i=0;
    for(;i<6;i++){
        scanf("%f",&num[i]);
        if(num[i]>0){
            positivos++;
        }
    }
    printf("%d valores positivos\n",positivos);
    return 0;
}
