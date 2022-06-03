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
    float entradaqua, saidaqua, totalqua;
    printf("informe a entradaqua:\n");
    scanf("%f",&entradaqua);
    printf("informe a saidaqua:\n");
    scanf("%f",&saidaqua);
    totalqua= entradaqua-saidaqua;
    printf("totalqua:%f\n",totalqua);
    if (totalqua>=2000){
        printf("positivo\n");
    }
    else if (totalqua<-500){
        printf("negativo\n");
    }


    float entradaqui, saidaqui, totalqui;
    printf("informe a entradaqui:\n");
    scanf("%f",&entradaqui);
    printf("informe a saidaqui:\n");
    scanf("%f",&saidaqui);
    totalqui= entradaqui-saidaqui;
    printf("totalqui:%f\n",totalqui);
    if (totalqui>=2000){
        printf("saldo positivo\n");
    }
    else if (totalqui<-500){
        printf("saldo negativo\n");
    }
    float entradasexta, saidasexta, totalsexta;
    printf("informe a entradasexta:\n");
    scanf("%f",&entradasexta);
    printf("informe a saidasexta:\n");
    scanf("%f",&saidasexta);
    totalsexta= entradasexta-saidasexta;
    printf("totalsexta:%f\n",totalsexta);
    if (totalsexta>=2000){
        printf("saldo psitivo\n");
    }
    else if (totalsexta>500){
        printf("saldo negativo");
    }
    return 0;
}
