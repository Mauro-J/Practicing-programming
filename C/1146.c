#include <stdio.h>
int main(){
    int X,i;
    do{
        scanf("%d",&X);

        if(X==0){
            break;
        }else{
            for(i=1;i<X;i++){
            printf("%d ",i);
            }
            printf("%d\n",X);
        }
    }while(1);
    return 0;
}
