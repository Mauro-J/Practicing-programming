#include <stdio.h>
int main()  {

    int percentual;
    float salario,Nsalario,reajuste;

    scanf("%f",&salario);
    if(salario<=400.00){
        percentual=15;
        Nsalario=(salario*0.15)+salario;
        reajuste=Nsalario-salario;
    }
    else if(salario>=400.01 && salario<=800.00){
        percentual=12;
        Nsalario=(salario*0.12)+salario;
        reajuste=Nsalario-salario;
    }
    else if(salario>=800.01 && salario<=1200.00){
        percentual=10;
        Nsalario=(salario*0.10)+salario;
        reajuste=Nsalario-salario;
    }
    else if(salario>=1200.01 && salario<=2000.00){
        percentual=7;
        Nsalario=(salario*0.07)+salario;
        reajuste=Nsalario-salario;
    }
    else if(salario>2000.00){
        percentual=4;
        Nsalario=(salario*0.04)+salario;
        reajuste=Nsalario-salario;
    }
    printf("Novo salario: %.2f\n",Nsalario);
    printf("Reajuste ganho: %.2f\n",reajuste);
    printf("Em percentual: %d %%\n",percentual);

    return 0;
}
