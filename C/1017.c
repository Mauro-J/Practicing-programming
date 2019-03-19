#include <stdio.h>

int main(int argc, char** argv)
{
	int tempo,vM,distancia;
	float litros;
	scanf("%d %d",&vM,&tempo);
	distancia = vM * tempo;
	litros = (float)distancia/12;
	printf("%.3f\n",litros);
	return 0;
}