// Crie um programa em C que peça ao usuário que insira um número inteiro
// e, em seguida, imprima a tabuada desse número de 1 a 10.
//
// Create a C program that asks the user to enter an integer
// and then prints the multiplication table for that number from 1 to 10.

#include<stdio.h>

int main()
{
    int num;

    printf("Type a number: ");
    scanf("%d", &num);

    printf("--- MULTIP. TABLE OF %d ---\n", num);
    for (int i = 0; i <= 10; i++)
    {
        printf("\t%d x %d = %d\n", num, i, (num * i));
    }
    return 0;
}
