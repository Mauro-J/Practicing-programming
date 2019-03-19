#include <stdio.h>

int main(void)
{
	int a,b,c,MaiorAB;
	scanf("%d %d %d",&a,&b,&c);
	MaiorAB = (a+b+abs(a-b))/2;
	MaiorAB = (c+MaiorAB+abs(c-MaiorAB))/2;	
	printf("%d eh o maior\n",MaiorAB);
	return 0;
}