#include <stdio.h>
int main()  {
    int horaI,horaF,duracao;
    scanf("%d %d",&horaI,&horaF);

    if(horaI>horaF){
        duracao = ((horaI-24)*(-1))+horaF;
    }else if(horaI==horaF){
        duracao=24;
    }else{
        duracao = horaF-horaI;
    }
    printf("O JOGO DUROU %d HORA(S)\n",duracao);
    return 0;
}
