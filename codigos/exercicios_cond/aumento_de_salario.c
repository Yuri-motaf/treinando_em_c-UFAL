/*

Uma empresa resolveu dar um aumento de salário aos seus colaboradores e lhe contrataram para desenvolver o programa que calculará os reajustes. Faça um programa em Java que recebe o salário de um colaborador e reajuste-o segundo o seguinte critério: Salários até R$ 280,00 (incluindo) : aumento de 20%. Salários entre R$ 280,00 e R$ 700,00 : aumento de 15%. Salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%.  Salários de R$ 1500,00 em diante : aumento de 5%.
*/
/*
entrada  : Salário do funcionário.
saida : Salário com reajuste.
*/
/*
ex
880.50         968.55
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float sal, novo_sal;

    scanf("%f", &sal);

    if(sal <= 280) novo_sal = sal * 1.2;

    if(280 < sal && sal < 700) novo_sal = sal * 1.15;

    if(sal >= 700 && sal < 1500) novo_sal = sal * 1.1;

    if(sal >= 1500) novo_sal = sal* 1.05;

    printf("%.2f", novo_sal);

	return 0;
}