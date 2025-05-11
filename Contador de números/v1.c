#include<stdio.h>
#include<locale.h>
#include<math.h>


//Faça um programa que peça números inteiros ao usuário e conta quantos números positivos e quantos números negativos foram digitados. O programa deverá parar quando o número zero for digitado, mostrando na tela os resultados. Além disso, o programa deverá informar se há mais números positivos, mais números negativos ou se há a mesma quantidade.
int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, positivos = 0, negativos = 0;
    
//Entrada de dados
    printf("Digite um número inteiro (0 para acabar):\n");

    do {
        printf("Número: ");
        scanf("%d", &num);

        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        }
    } while (num != 0);
//Contagem
    printf("\nResultados:\n");
    printf("%d Números positivos \n", positivos);
    printf("%d Números negativos \n", negativos);

//Conta dif.
    int diferenca = positivos - negativos;
    int diferenca2 = negativos - positivos;
//Resultados
    if (positivos > negativos) {
        printf(  "Diferenca de %d mais números positivos que negativos.\n" , diferenca);
    } else if (negativos > positivos) {
        printf( "Diferenca de %d mais números negativos que positivos.\n" , diferenca2);
    } else {
        printf("Há a mesma quantidade de números positivos e negativos.\n");
    }





    return 0;
}
