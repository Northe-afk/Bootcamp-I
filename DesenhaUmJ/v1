#include<stdio.h>
#include<locale.h>
#include<math.h>


//Faça um programa que, dado um número n maior que 5, mostra a primeira letra do seu nome feita com n linhas contendo a letra x. Esse programa deverá ter, no máximo, 4 laços de repetição.

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    //Entrada do n
    printf("Digite um número maior que 5: ");
    scanf("%d", &n);   
    if (n <= 5) {
        printf("Número inválido. O número deve ser maior que 5.\n");
        }
    //Desenho do "J" com n linhas
    for (int x = 0; x < n; x++) {           //"Matrix" Para o desenho (x,y)
        for (int y = 0; y < n; y++)
        //Tamanho do "J"
        if (y == n - 2 ||                   //Coluna Direita    
            (x == n - 1 && y <= n - 2) ||   //Base da Letra
            (x >= n / 2 && y == 0)) {     //Curva Esquerda
            printf("x");
        } else {
            printf(" ");
        
        }
        printf("\n");
    
    }






    
    return 0;
}



/* Para N=6

     # 
     # 
     # 
     # 
#    # 
 ####  

*/
