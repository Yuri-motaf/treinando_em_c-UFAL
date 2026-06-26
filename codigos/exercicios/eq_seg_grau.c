/*
    Toda vez que Ambrósio vai calcular as raízes de uma equação do segundo grau, esquece de algum detalhe e calcula errado. Para evitar esquecimentos, resolveu fazer um programa que calcula as raízes da equação de segundo grau.
*/
/*
    entrada:
    Consiste dos números reais a, b e c, que correspondem aos coeficientes da equação de segundo grau (ax²+bx+c=0).
*/
/*
    saida:
    Caso existam as raízes da equação, consiste de dois números reais formatados com duas casas decimais, representando as mesmas.

    Caso as raízes não existam, o sistema deve mostrar a mensagem (não existem raízes reais): NRR

    Caso não seja uma equação de segundo grau, o sistema deve mostrar a mensagem (não é uma equação do segundo grau): NEESG

    Dica: 
    O delta indica a natureza das raízes( soluções) da equação e é calculado coma fórmula  b² - 4ac. 
    Se delta é maior que 0, a equação tem duas raízes reais e distintas. As raízes são calculadas pela fórmula de Bhaskara.
    Se delta é igual a 0, a equação tem uma raiz real (duas raízes iguais). 
    Se delta é menor que  0, a equação não tem raízes reais.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a , b , c;
    scanf("%f %f %f", &a, &b , &c);
    
    float r1, r2;

    double delta;
       if(a == 0)
    {
        printf("NEESG\n");
    }
    else
    {
        double delta;
        
        delta = (double)(b * b) - (4 * a * c);
        
        if(delta < 0)
        {
            printf("NRR\n");
        }
        else if(delta == 0)
        {   
            r1 = (-b) / (2 * a);

            printf("%.2f\n", r1);
        
        }
        else
        {
            r1 = ((-b) + sqrt(delta)) / (2 * a);
        
            r2 = ((-b) - sqrt(delta)) / (2 * a);

            printf("%.2f\n%.2f\n", r1 , r2);
        }
    }
	return 0;
}


