#include <stdio.h>

int main () {
    double valor;
	int A,B,C,D,E,F,G,H,I,J,K;
	int cem, cinquenta, vinte, dez,cinco, dois;
	int M_umR,M_cinquenta,M_vintecinco,M_dez,M_cinco,M_um;
    
	scanf("%lf",&valor);
	A=valor;
	cem=A/100;		B=A%100; // Declaração dos restos de cada divisão
	cinquenta=B/50;	C=B%50;
	vinte=C/20;		D=C%20;
	dez=D/10;		E=D%10;
	cinco=E/5;		F=E%5;
	dois=F/2;
	M_umR=F%2;
	
	G=valor*100;		H=G%100; 
	M_cinquenta=H/50;	I=H%50;
	M_vintecinco=I/25;	J=I%25;
	M_dez=J/10;			K=J%10;
	M_cinco=K/5;
	M_um=K%5;
	
	printf("NOTAS:\n");
	
    printf("%d nota(s) de R$ 100.00\n",cem);
    printf("%d nota(s) de R$ 50.00\n",cinquenta);
	printf("%d nota(s) de R$ 20.00\n",vinte);
	printf("%d nota(s) de R$ 10.00\n",dez);
	printf("%d nota(s) de R$ 5.00\n",cinco);
	printf("%d nota(s) de R$ 2.00\n",dois);
	
	printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",M_umR);
    printf("%d moeda(s) de R$ 0.50\n",M_cinquenta);
	printf("%d moeda(s) de R$ 0.25\n",M_vintecinco);
	printf("%d moeda(s) de R$ 0.10\n",M_dez);
	printf("%d moeda(s) de R$ 0.05\n",M_cinco);
	printf("%d moeda(s) de R$ 0.01\n",M_um);

   return 0;
}
