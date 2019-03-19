#include <stdio.h>

int main()  {
    int i,N,F1,F2;
    int num1,num2,resto;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d%d", &num1, &num2);
        resto=num1%num2;
        while(resto!=0)
        {
          num1 = num2;
          num2 = resto;
          resto = num1%num2;
        }
        printf("%d\n",num2);
    }
    return 0;
}
