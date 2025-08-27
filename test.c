#include <stdio.h>

int main(){
    int idade;
    float altura;
    double salarioInicial;
    char nome [20];

    printf("Qual e a sua idade?:\n");
    scanf("%d",&idade);

    printf("Qual e a sua altura ? : \n");
    scanf("%f",&altura);

    printf("E qual e o seu salario ? : \n");
    scanf("%f",&salarioInicial);

    printf("E qual e o seu nome ? : \n");
    scanf("%s",&nome);
    
    printf("Agora,os resultados : \n");

    printf("Sua idade e: %d \n",idade);
    printf("Sua Altura e: %.2f \n",altura);
    printf("Seu Salario e : %.2f \n",salarioInicial);
    printf("Seu Nome e : %s",nome);




}

