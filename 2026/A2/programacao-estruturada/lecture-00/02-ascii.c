// Crie um programa em C que peça ao usuário que insira um caractere e, em seguida, imprima o código ASCII correspondente ao caractere digitado.
// Write a program in C that asks the user to input a character and then prints the corresponding ASCII code for the entered character.

#include<stdio.h>

int main()
{
    char input;

    printf("Type a character: ");
    scanf("%c", &input);

    printf("The ASCII value for `%c` is `%d`\n", input, input);

    return 0;
}
