#include <stdio.h>
 
int main() {
    int N,H,M;
    scanf("%d",&N);
    M=N/60;
    H=(int)M/60;
    N=N-(M*60);
    M=M%60;
	printf("%d:%d:%d\n",H,M,N);
    return 0;
}