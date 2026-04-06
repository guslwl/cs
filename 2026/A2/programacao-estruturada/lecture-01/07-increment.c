// Crie um programa em C que declare uma variável int e uma variável char.
// Atribua a eles valores fornecidos pelo usuário. Em seguida, incremente cada um
// várias vezes (o número de vezes também é fornecido pelo usuário) e imprima os resultados.
//
// Create a C program that declares an int variable and a char variable.
// Assign them values provided by the user. Then increment each of them
// several times (the number of increments is also provided by the user)
// and print the results.

#include<stdio.h>

int main()
{
    int number, timesToIncrement;
    char character;

    printf("Type a number: ");
    scanf("%d", &number);

    printf("Type a char: ");
    scanf("%c", &character);

    printf("Times to increment: ");
    scanf("%d", &timesToIncrement);

    for (int i=0; i < timesToIncrement; i++)
    {
        number++;
        character++;
    }

    printf("New values:\n\tnumber: %d\n\tchar: %c", number, character);

    return 0;
}
