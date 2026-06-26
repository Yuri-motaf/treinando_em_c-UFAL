/*
Definição: long long int é um tipo inteiro com sinal (equivalente a long long), padronizado em C99; garante pelo menos 64 bits (normalmente 8 bytes em sistemas modernos).
Intervalo típico: signed: -2^63 .. 2^63−1 (≈ -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807); unsigned: 0 .. 2^64−1 (≈ 18.446.744.073.709.551.615).
Quando usar: para inteiros maiores que o int/long suportam (contadores grandes, timestamps, tamanhos); se precisar exatamente de 64 bits, prefira int64_t (<stdint.h>).
Literais e formatadores: use sufixos LL/ULL em constantes (ex.: 123LL, 123ULL); printf/scanf usam %lld e %llu.
Comportamento importante: overflow de inteiros assinados é indefinido; para unsigned a aritmética é módulo 2^N. Conversões seguem as regras usuais de promoção.
Compatibilidade: padronizado em C99; em C++ entrou oficialmente no C++11 (muitos compiladores já o suportavam antes).
Exemplo rápido:
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#include <stdio.h>
int main(){
    long long int a = 123456789012345LL;
    unsigned long long  b = 18446744073709551615ULL;
    printf("a = %lld, b = %llu, sizeof = %zu\n", a, b, sizeof(b));
    
    return 0;
}

// int main() {
//     long long int a = 3000000000LL;

//     printf("%lld\n", a);
//     return 0;
// }