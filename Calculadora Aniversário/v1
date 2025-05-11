#include<stdio.h>
#include<locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    int jan = 31, fev = 28, mar = 31, abr = 30, mai = 31, jun = 30;
    int jul = 31, ago = 31, set = 30, out = 31, nov = 30, dez = 31;
    int fev1 = fev + jan, mar1 = mar + fev1, abr1 = abr + mar1;
    int mai1 = mai + abr1, jun1 = jun + mai1, jul1 = jul + jun1;
    int ago1 = ago + jul1, set1 = set + ago1, out1 = out + set1;
    int nov1 = nov + out1, dez1 = dez + nov1;

    int dia_niver, mes_niver; // Data de aniversário
    int dia_atual = 29, mes_atual = 4; // Data atual: 29 de abril
    int dia_ano_niver, dia_ano_hoje;

    printf("Digite sua data de aniversário (dia/mês): ");
    scanf("%d/%d", &dia_niver, &mes_niver);

    // Calcula o dia do ano do aniversário
    if (mes_niver == 1) { dia_ano_niver = dia_niver; }
    if (mes_niver == 2) { dia_ano_niver = jan + dia_niver; }
    if (mes_niver == 3) { dia_ano_niver = fev1 + dia_niver; }
    if (mes_niver == 4) { dia_ano_niver = mar1 + dia_niver; }
    if (mes_niver == 5) { dia_ano_niver = abr1 + dia_niver; }
    if (mes_niver == 6) { dia_ano_niver = mai1 + dia_niver; }
    if (mes_niver == 7) { dia_ano_niver = jun1 + dia_niver; }
    if (mes_niver == 8) { dia_ano_niver = jul1 + dia_niver; }
    if (mes_niver == 9) { dia_ano_niver = ago1 + dia_niver; }
    if (mes_niver == 10) { dia_ano_niver = set1 + dia_niver; }
    if (mes_niver == 11) { dia_ano_niver = out1 + dia_niver; }
    if (mes_niver == 12) { dia_ano_niver = nov1 + dia_niver; }

    // Calcula o dia do ano de hoje
    dia_ano_hoje = dia_atual;
    if (mes_atual == 2) { dia_ano_hoje = jan + dia_atual; }
    if (mes_atual == 3) { dia_ano_hoje = fev1 + dia_atual; }
    if (mes_atual == 4) { dia_ano_hoje = mar1 + dia_atual; }
    if (mes_atual == 5) { dia_ano_hoje = abr1 + dia_atual; }
    if (mes_atual == 6) { dia_ano_hoje = mai1 + dia_atual; }
    if (mes_atual == 7) { dia_ano_hoje = jun1 + dia_atual; }
    if (mes_atual == 8) { dia_ano_hoje = jul1 + dia_atual; }
    if (mes_atual == 9) { dia_ano_hoje = ago1 + dia_atual; }
    if (mes_atual == 10) { dia_ano_hoje = set1 + dia_atual; }
    if (mes_atual == 11) { dia_ano_hoje = out1 + dia_atual; }
    if (mes_atual == 12) { dia_ano_hoje = nov1 + dia_atual; }

    // Calcula os dias até o aniversário
    int dias_ate_niver = dia_ano_niver - dia_ano_hoje;

    if (dia_ano_niver < dia_ano_hoje) {
        printf("Seu aniversário foi há %d dias atrás", -dias_ate_niver);
    } else if (dia_ano_niver > dia_ano_hoje) {
        printf("Seu aniversário é daqui a %d dias", dias_ate_niver);
    } else {
        printf("Feliz aniversário!");
    }

    return 0;
}

