// Crie um programa em C que peça ao usuário que insira três números inteiros,
// calcule a média como um número de ponto flutuante e imprima o resultado.
//
// Create a C program that asks the user to enter three integers,
// computes the average as a floating-point number and prints the result.

#include<stdio.h>

int main()
{
    int num1, num2, num3;
    float average;

    printf("Type three integers and hit `Enter` three times.\n");
    printf(": ");
    scanf("%d", &num1);

    printf(": ");
    scanf("%d", &num2);

    printf(": ");
    scanf("%d", &num3);

    average = (num1 + num2 + num3) / 3.0;
    printf("The average is: %.2f\n", average);

    return 0;
}
