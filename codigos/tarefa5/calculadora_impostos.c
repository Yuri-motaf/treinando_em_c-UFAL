/*
Descrição
Uma empresa de importação de produtos eletrônicos em parceria com o CIn deseja fazer um programa que calcule o valor final do produto e discrimine na nota fiscal quanto o cliente pagou em impostos(Imposto de importação e ICMS), frete e total a pagar. Segue algumas informações que você precisará saber para resolver essa questão:



A taxa de importação para eletrônicos é de 60%;
O valor final do produto é dado pela soma do (Valor do Produto + Frete + Impostos de Importação) / (1 - Aliquota)
O calculo do ICMS é dado pela formula: (Valor Final do produto x Aliquota)

A empresa tema cultura de não adicionar o frete no calculo, para valores de US$ 2,500 em diante. Informe isso ao fim da nota.

Sua entrada deve conter

-Cotação do Dolar
-Aliquota(%) do ICMS
-Valor do produto
-Valor do frete	
Sua saída deve conter:

-Taxa de conversão monetária (Cotação do dolar)
-Valor do produto (em reais)
-Valor do frete (em reais)
-Valor total (Valor do frete + Valor do produto)
-Valor de impostos de importação
-Valor de icms
-Total de Impostos (Importação + ICMS)
-Total a pagar
-Dizer se o total foi ou não isento do frete no calculo
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double cotDolar, ICMS, valorProduto, valorFrete;
    double ProdutoReais, FreteReais, valorTotal, impostoimportacao, ValorFinalProduto, ICMSvalor, totalImpostos, totalPagar;
    double produto_mais_frete;
    
    scanf("%lf %lf %lf %lf", &cotDolar, &ICMS, &valorProduto, &valorFrete);
    
    ProdutoReais = cotDolar * valorProduto;
    FreteReais = cotDolar * valorFrete;
    
    produto_mais_frete = ProdutoReais + FreteReais;

    if(valorProduto >= 2500){

        impostoimportacao = ProdutoReais * 0.6;
        ValorFinalProduto = (ProdutoReais + impostoimportacao) / (1 - ICMS / 100);
        ICMSvalor = (ICMS / 100) * ValorFinalProduto;
        totalImpostos = impostoimportacao + ICMSvalor;
        valorTotal = ProdutoReais + FreteReais;
        
        totalPagar = valorTotal + totalImpostos;
    }
    else
    {
        valorTotal = ProdutoReais + FreteReais;
        impostoimportacao = valorTotal * 0.6;
        ValorFinalProduto = (valorTotal + impostoimportacao) / (1 - ICMS / 100);
        ICMSvalor = (ICMS / 100) * ValorFinalProduto;
        totalImpostos = impostoimportacao + ICMSvalor;
     
        totalPagar = totalImpostos + valorTotal;
    }
    
    printf("%.2f\n", cotDolar);
    printf("%.2f\n", ProdutoReais);
    printf("%.2f\n", FreteReais);
    printf("%.2f\n", produto_mais_frete);
    printf("%.2f\n", impostoimportacao);
    printf("%.2f\n", ICMSvalor);
    printf("%.2f\n", totalImpostos);
    
    printf("%.2lf\n", totalPagar);
    
    if(valorProduto >= 2500){
        printf("Impostos calculados sem o frete\n");
    }
    else
    {
        printf("Impostos calculados com o frete\n");
    }

	return 0;
}
