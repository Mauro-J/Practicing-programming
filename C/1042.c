#include <stdio.h>

int main()
{
	int n1, n2, n3;
	scanf("%d %d %d",&n1,&n2,&n3);
	if (n3 > n1){
    	if (n1 > n2)
      printf("%d \n%d \n%d\n\n", n2, n1, n3);
    	else if (n2 < n3)
      printf("%d \n%d \n%d\n\n", n1, n2, n3);
	}if (n1 > n2){
	    if (n2 > n3)
	      printf("%d \n%d \n%d\n\n", n3, n2, n1);
	    else if (n3 < n1)
	      printf("%d \n%d %d\n\n", n2, n3, n1);
	}if (n1 < n2){
	    if (n3 < n1)
	      printf("%d \n%d \n%d\n\n", n3, n1, n2);
	    else if (n3 < n2)
	      printf("%d \n%d \n%d\n\n", n1, n3, n2);
	}
	
	printf("%d\n%d\n%d\n",n1,n2,n3);
  	return 0;
}