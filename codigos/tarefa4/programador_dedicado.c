/*
Descrição
Não tem dia ruim pra Demóclistenes. Ele programa todo dia e estabeleceu uma meta de fazer pelo menos 5 programas e 100 linhas de código por dia. 

Escreva um programa que receba como entrada a quantidade de programas e a quantidade de linhas de código feitas por ele em cada um dos sete dias da semana, e exiba em quantos dias ele cumpriu as duas metas e o dia em que ele mais produziu linhas de código.

ATENÇÃO:

Assuma que o primeiro dia da semana é DOMINGO.

Se a produção de programas for a mesma todos os dias, será exibido o último dia da semana.

Formato de entrada

Sequência de 14 valores inteiros e positivos não-nulos

Formato de saída

Quantidade de dias que atingiu meta de programas

Quantidade de dias que atingiu meta de linhas de código

Dia que mais produziu linhas de código
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int bateuMetaCodigos(int qntdCodigos)
{
    if(qntdCodigos >= 5) return 1;
    else return 0;
}

int bateuMetaLinhas(int linhas)
{
    if(linhas >= 100) return 1;
    else return 0;
}

void entradas(int n, int cont, int Pacimamedia , int Lacimamedia, int dia_maior , int linhas_maior_dia)
{
    if(n < cont)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n" , Pacimamedia);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", Lacimamedia);
        switch (dia_maior)
        {
        case 1:
            printf("DIA QUE MAIS PRODUZIU: DOMINGO");
            break;
        case 2:
            printf("DIA QUE MAIS PRODUZIU: SEGUNDO");
            break;
        case 3:
            printf("DIA QUE MAIS PRODUZIU: TERÇA");
            break;
        case 4:
            printf("DIA QUE MAIS PRODUZIU: QUARTA");
            break;
        case 5:
            printf("DIA QUE MAIS PRODUZIU: QUINTA");
            break;
        case 6:
            printf("DIA QUE MAIS PRODUZIU: SEXTA");
            break;
        case 7:
            printf("DIA QUE MAIS PRODUZIU: SABADO");
            break;
        }
    }
    else
    {
        int progra_dia , linhas_dia;
        scanf("%d %d" , &progra_dia , &linhas_dia);
        
        Pacimamedia += bateuMetaCodigos(progra_dia);
        Lacimamedia += bateuMetaLinhas(linhas_dia);
        
        if(cont == 1)
        {
            dia_maior =1;
            linhas_maior_dia = linhas_dia;
        }
        if(linhas_dia > linhas_maior_dia) 
        {
            dia_maior = cont;
            linhas_maior_dia = linhas_dia;
        }
        
        return entradas(n , cont + 1 , Pacimamedia , Lacimamedia , dia_maior , linhas_maior_dia);
    }
}

int main()
{
    int dias;
    dias = 7;
    entradas(dias, 1 , 0 , 0 , 0 , 0);

    return 0;
}