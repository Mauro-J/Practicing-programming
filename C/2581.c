#include <stdio.h>
 
int main() {
	int N=0;
	while(scanf("%d",&N) != EOF){
		if(N!=0){
			printf("vai ter duas!\n");
		}else
		{
			printf("vai ter copa!\n");
		}
	}
    return 0;
}