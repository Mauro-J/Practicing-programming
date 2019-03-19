#include <stdio.h>

int main()  {
    float i=0,n,avg=0;
    while(1){
        scanf("%f",&n);
        if(n>=0 && n<=10){
                avg = avg + n/2;
                i++;
                if(i>1) break;
        }else{
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n",avg);
    return 0;
}
