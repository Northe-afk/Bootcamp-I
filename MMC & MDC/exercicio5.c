#include<stdio.h>
#include<locale.h>
#include<math.h>



//Faça um programa que peça dois números inteiros positivos, m e n, e calcula o mínimo múltiplo comum (MMC) e o máximo divisor comum (MDC) desses números. O programa deverá mostrar as etapas do MMC e os resultados. Cálculo do MDC deverá ocorrer aproveitando as etapas do cálculo do MMC. 

int main() {
    setlocale(LC_ALL, "Portuguese");

    int m, n, a, b, resto, mmc, mdc, max; // a & b para manter m & n

    //Entrada de dados
    printf("Digite dois números inteiros positivos (m e n): ");
    printf("m: ");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);

    //m ou n maior?
    if (m > n) {
        max = m;
    } else {
        max = n;
    }
    
    mmc = max;
    //Cálculo do MMC
    while ((mmc % m != 0) || (mmc % n != 0)) { //testando ate max ser divisivel por a & b
        mmc = mmc + max;
    }


    //Cálculo do MDC
    a = m;
    b = n;

    while (b != 0) {      //MDC(b, a % b) ate b = 0, quando mdc = a 
        resto = a % b;
        a = b;
        b = resto;
    }

    mdc = a;
    printf("MDC: %d\n", mdc);
    printf("MMC: %d\n", mmc);

    return 0;
}