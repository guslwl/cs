// Desenvolva um algoritmo que descobre se um número é par ou impar.
// Write an algorithm to find out if a number is odd or even

#include <stdio.h>

int isEven(int number);

int main()
{
    int x;

    printf("Input a number: ");
    scanf("%i", &x);

    if(isEven(x))
        printf("This number is even");
    else
        printf("This number is odd");

    printf("\n");
    return 0;
}

int isEven(int number){
    if (number % 2 == 0)
        return 1;

    return 0;
}
