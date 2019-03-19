#include <stdio.h>
int main()
{
    int X,Y,Z=0;
    scanf("%d %d", &X, &Y);
    if(X==Y)
        printf("%d\n",Z);
    else if(X<Y)
    {
        for(X=X+1;X<Y;X++)
        {
            if(X%2==1||X%2==-1)
                Z+=X;
        }
        printf("%d\n",Z);
    }
    else if(X>Y)
    {
        for(Y=Y+1;Y<X;Y++)
        {
            if(Y%2==1||Y%2==-1)
                Z+=Y;
        }
        printf("%d\n",Z);
    }
    return 0;
}
