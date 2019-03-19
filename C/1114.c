#include <stdio.h>
int main()
{
    int N,S;
    while(1){
        scanf("%d",&S);
        if(S==2002){
            printf("Acesso Permitido\n");
            break;
        }else
            printf("Senha Invalida\n");
    }
    return 0;
}
