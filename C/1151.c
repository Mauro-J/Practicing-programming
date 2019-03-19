#include <stdio.h>
int main()
{
    int i,a=0,b=1,aux,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d  ",a);
        aux = a + b;
        a = b;
        b = aux;
    }

    return 0;
}
