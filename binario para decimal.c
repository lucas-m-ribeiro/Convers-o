/* Dado um numero em Binario, converter para seu valor em decimal*/

#include <stdio.h>

int transforma(int binario)
{
    int total  = 0;
    int potencia = 1;

	/*Para converter o numero em binario basta pegar a quantidade de numeros binários e depois multiplicar por 2, 
	com um expoente representante do numero.Os numeros calculados sao os numeros binarios x a base 2 (binario) 
	e o expoente é referente a quentidade de numeros que contem seu binario , lembrando que o numero elevado a zero da 1 */
	
    while(binario > 0) {
        total += binario % 10 * potencia;
        binario = binario / 10;
        potencia = potencia * 2;
    }
    return total;
}

int main(void)
{
    int decimal = 0;
    int binario = 0;

    printf("Entre com um numero binario: (0 e 1):  ");
    scanf("%d", &binario);

    decimal = transforma(binario);

    printf("\no numero em binario e: = %d - A conversao e igual a: = %d\n", binario, decimal);

    return 0;
}

