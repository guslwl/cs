// Desenvolva um algoritmo que solicite ao usuário dois números inteiros. Imprima a soma destes dois números na tela.
// Develop an algorithm to ask the user for two integer numbers. Output the sum of those numbers in the terminal.

#include <stdio.h>

int main()
{
    int x, y;

    printf("Input a number: ");
    scanf("%i", &x);

    printf("Input a number: ");
    scanf("%i", &y);

    printf("%i + %i = %i\n", x, y, (x+y));

    return 0;
}
