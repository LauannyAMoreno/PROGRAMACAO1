/*
ler o valor do dia
a saida do dia
informa se o saldo e positivo ou negativo
*/
#include<stdio.h> 
int main()
{
    float entradaseg, saidaseg, total;
    printf("informe a entradaseg:\n");
    scanf("%f",&entradaseg);
    printf("informe a saidaseg:\n");
    scanf("%f",&saidaseg);
    total= entradaseg-saidaseg;
    printf("total:%f\n",total);
    if (total>=2000){
        printf("saldo positivo\n");
    }
    else if (total>500){
        printf("saldo negativo\n");
    }


    float entradater, saidater, totalter;
    printf("informe a entradater:\n");
    scanf("%f",&entradater);
    printf("informe a saidater:\n");
    scanf("%f",&saidater);
    totalter= entradater-saidater;
    printf("totalter:%f\n",totalter);
    if (totalter>=2000){
        printf("saldo psitivo\n");
    }
    else if (totalter>500){
        printf("saldo negativo");
    }
    return 0;
}
