/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 06/12/2024

FIX05_EX09: Faça um programa em Linguagem C que dado o conjunto de temperaturas médias de cada um dos dias do mês (para um mês de trinta dias), apresente:
A menor temperatura do mês; 
A maior temperatura do mês; 
A temperatura média mensal; 
O número de dias no mês em que a temperatura foi inferior à média mensal. 

*/

#include <stdio.h>
int main() {
    float temperaturas[30];
    float menor, maior, media, soma = 0;
    int dias_menorMedia = 0;
    int dia;

    for (dia = 0; dia < 30; dia++)
    {
        scanf("%f", &temperaturas[dia]);
        soma = soma + temperaturas[dia];
    }
    
    if (dia == 0)
    {
        menor = temperaturas[dia];
        maior = temperaturas[dia];
    } else if (temperaturas [dia] < menor)
    {
        menor = temperaturas[dia];
    } else if (temperaturas[dia] > maior)
    {
        maior = temperaturas[dia];
    }
    
    media = soma / 30;

    for (dia = 0; dia < 30; dia++)
    {
        if (temperaturas[dia] < media)
        {
            dias_menorMedia++;
        }
    }
    
    printf("Menor temperatura: %.2f\n", menor);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Temperatura media mensal: %.2f\n", media);
    printf("Numero de dias com temperatura menor que a media: %.2f\n", dias_menorMedia);

    return 0;
}