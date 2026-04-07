// Crie um programa em C que peça ao usuário que insira dois números inteiros
// e imprima a soma, a diferença, o produto e o quociente.
//
// Create a C program that asks the user to enter two integers
// and prints their sum, difference, product and quotient.

#include<stdio.h>

int main()
{
    int num1, num2, sum, difference, product, quotient;

    printf("Type a integer and hit `Enter` two times.\n");
    printf(": ");
    scanf("%d", &num1);

    printf(": ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, difference);
    printf("%d * %d = %d\n", num1, num2, product);
    printf("%d / %d = %d\n", num1, num2, quotient);

    return 0;
}
