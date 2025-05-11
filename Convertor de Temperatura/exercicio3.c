#include<stdio.h>
#include<locale.h>
#include<math.h>


//  Faça um programa que converta a temperatura de graus Celsius para graus Farenheit ou vice-versa. O programa deverá perguntar se a temperatura de entrada está em Celsius ou Farenheit e mostrar a temperatura digitada convertida para a outra unidade.
int main() {
    setlocale(LC_ALL, "Portuguese");

    float temp, resultado;
    char unidade;

    printf("Qual a unidade da temperatura? (C Para Celsius, F para Fahrenheit): ");
    scanf(" %c", &unidade);
    //Tc/5=(Tf-32)/9 Tc=Tf-32*5/9 Tf=Tc*9/5+32
    if (unidade == 'C' || unidade == 'c') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temp);
        resultado = (temp * 9/5) + 32;
        printf("A temperatura em Fahrenheit é: %.2f\n", resultado);
    } else if (unidade == 'F' || unidade == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temp);
        resultado = (temp - 32) * 5/9;
        printf("A temperatura em Celsius é: %.2f\n", resultado);
    }

    return 0;
}

