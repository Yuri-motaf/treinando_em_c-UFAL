#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial(int x) 
{
    if(x ==1 || x==0)
    {
        return 1;
    }
    else
    {
        return x * fatorial(x-1);
    }
}
    

int main() {
    
    int num;
    scanf("%d", &num);
    
    int num_fatorial = fatorial(num);
    
    printf("%d",  num_fatorial);
    
	return 0;
}

