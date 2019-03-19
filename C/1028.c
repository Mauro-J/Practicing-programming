#include <stdio.h>

int main()  {
    int i,N,F1,F2;
    int num1,num2,resto, a, b;
    scanf("%d",&N);


    for(i=0;i<N;i++){
        scanf("%d %d",&num1,&num2);
        a = num1;
        b = num2;
        do {
            resto = a % b;

            a = b;
            b = resto;

        } while (resto != 0);
        printf("%d",( num1 * num2) / a);
    }


    return 0;
}
