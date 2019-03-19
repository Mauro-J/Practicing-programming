#include <stdio.h>
int main()
{
    int num,a,b,c,d,e;
    scanf("%d", &num);
    for(a=1; a<=num; a++)
    {
        b=a*a;
        c=a*a*a;
        printf("%d %d %d\n",a,b,c);
        d=b+1;
        e=c+1;
        printf("%d %d %d\n",a,d,e);
    }
    return 0;
}
