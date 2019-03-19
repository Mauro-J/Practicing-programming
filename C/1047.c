#include <stdio.h>

int main()  {
    int horainicial,horafinal,minutoinicial,minutofinal,duracaoh,duracaom;

    scanf("%d %d %d %d",&horainicial,&minutoinicial,&horafinal,&minutofinal);

    duracaoh = horafinal - horainicial;
    if(duracaoh < 0){
        duracaoh = 24 +(horafinal - horainicial);
    }
    duracaom = minutofinal - minutoinicial;
    if(duracaom < 0)
    {
        duracaom = 60 + (minutofinal - minutoinicial);
        duracaoh--;
    }
    if(horafinal == horainicial && minutofinal == minutoinicial)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duracaoh,duracaom);


    return 0;
}
