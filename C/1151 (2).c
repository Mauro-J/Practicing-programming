#include <stdio.h>

int main()
{
    int a=0, b=1, aux, i, n;

    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        printf("%d ", a);
        aux = a + b;
        a = b;
        b = aux;
    }
    printf("%d\n",a);
    return 0;
}
