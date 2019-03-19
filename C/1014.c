#include <stdio.h>

int main(void)
{
	int X;
	float Y,consumo;
	scanf("%d %f",&X,&Y);
	consumo = X/Y;
	printf("%.3f km/l\n",consumo);
	return 0;
}