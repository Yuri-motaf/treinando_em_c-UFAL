/*
O grande dia está chegando. A cada segundo, estamos mais próximos da copa do mundo de futebol de Ambrolândia!

A EIFA ( Entidade Internacional de Futebol e Associados) está desesperada procurando alguém para implementar um programa que dado o sexo, a idade, a nacionalidade e o valor do ingresso, retorne: o preço do ingresso. Caso a idade seja inválida, retorne "idade invalida!". Caso o ingresso não possa ser vendido, retorne "nao pode comprar".

A idade é válida quando 0 < idade <= 120;

Temos um problema de legislação. Como se trata de um evento internacional, cada país tem a maioridade legal definida por idades diferentes e, portanto, existem países que não permitem que ingressos sejam vendidos para menores. Além disso, a Entidade resolveu oferecer descontos diferenciados.

Nacionalidades: Todo o alfabeto maiúsculo da tabela ASCII, atente para a legislação e descontos destes países: (B)rasileira, (A)rgentina, (F)rancesa, (C)roata, (I)taliana e (R)ussa, onde '(C)' é um caractere.

Legislação:
Brasil e Argentina - maioridade é obtida aos 18 anos (idade >= 18); ingressos podem ser vendidos para qualquer um.
França e Croácia - maioridade é obtida aos 21 anos (idade >= 21); ingressos só podem ser vendidos para maiores.
Itália e Rússia - maioridade é obtida aos 16 anos (idade >= 16), ingressos podem ser vendidos para qualquer um.

Regras para o desconto (verificar a legislação e o desconto aplicado será o maior, ou seja, não é cumulativo):

Se o sexo for feminino, 10% de desconto independente da nacionalidade.
Se for Brasileiro, desconto de 50% independente do sexo e da idade.
Se for Argentino (masculino) com maioridade legal, não tem desconto.
Se for Argentina (feminino) com maioridade legal, desconto de 20%.
Se for Argentino (masculino ou feminino) menor, desconto de 20%.
Se for Francês ou Croata com maioridade legal, desconto de 30%.
Se for Italiano ou Russo (masculino ou feminino) menor, desconto de 40%.
Se for Italiano ou Russo (masculino ou feminino) com maioridade legal, desconto de 30%.
*/

/*
entrada:
Um caractere, um inteiro, um caractere e um valor de ponto flutuante, que são respectivamente:

Nacionalidade(N), Idade(I), Sexo(S),  e valor do ingresso(VI), a serem lidos da seguinte maneira:
N   I  S  VI
A  18  M  190

Onde:
N pode ser qualquer caractere do alfabeto maiúsculo da tabela ASCII;
I pode ser qualquer inteiro, atente-se para a idade válida;
S pode ser 'M' (masculino) e 'F' (feminino);
VI >= 10;
*/
/*
saida:

Se a idade for inválida, a saída será:

idade invalida!

Se o ingresso não pode ser vendido, a saída será:

nao pode comprar

Se o ingresso pode ser comprado, informe o valor a ser pago (considerando o desconto) da seguinte maneira:

R$ 190.00
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char N;//nacio
    int I;//ida
    char S;//sex
    float VI;//valori
    
    float desconto = 1.0;
    float novo_desconto;
    float valor_final;
    
    scanf(" %c %d %c %f", &N, &I , &S, &VI);
    
    if(I <= 0 || I > 120)
    {
        printf("idade invalida!");
        return 0;
    }
    
    if(S == 'F')
    {
        desconto = 0.9;
    }
    
    if(N == 'B')
    {
        
        novo_desconto = 0.5;
        if(novo_desconto < desconto)
        {
            desconto = novo_desconto;
        }
    }
    else if(N == 'A')
    {
        if(I < 18)
        {
            novo_desconto = 0.8;
        }
        else
        {
            if(S == 'F')
            {
                novo_desconto = 0.8;
            }
            else
            {
                novo_desconto = 1.0;
            }
        }
        
        if(novo_desconto < desconto)
        {
            desconto = novo_desconto;
        }
    }
    else if(N == 'F')
    {
        if(I < 21)
        {
            printf("nao pode comprar");
            return 0;
        }
        novo_desconto = 0.7;
        if(novo_desconto < desconto)
        {
            desconto = novo_desconto;
        }
    }
    else if(N == 'C')
    {
        if(I < 21)
        {
            printf("nao pode comprar");
            return 0;
        }
        novo_desconto = 0.7;
        if(novo_desconto < desconto)
        {
            desconto = novo_desconto;
        }
    }
    else if(N == 'I')
    {
        if(I < 16)
        {
            novo_desconto = 0.6;
        }
        else
        {
            novo_desconto = 0.7;
        }
        
        if(novo_desconto < desconto)
        {
            desconto = novo_desconto;
        }
    }
    else if(N == 'R')
    {
        if(I < 16)
        {
            novo_desconto = 0.6;
        }
        else
        {
            novo_desconto = 0.7;
        }
        
        if(novo_desconto < desconto)
        {
            desconto = novo_desconto;
        }
    }

    valor_final = VI * desconto;
    printf("R$ %.2f", valor_final);
    
    return 0;
}