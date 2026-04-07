// Crie uma função chamada "parOuImpar" que recebe um número inteiro
// e imprime se ele é par ou ímpar. Use esta função em seu programa principal.
//
// Create a function named "parOuImpar" that receives an integer
// and prints whether it is even or odd. Use this function in main.

#include<stdio.h>

void parOuImpar(int number);

int main()
{
    parOuImpar(3);
    parOuImpar(6);
    parOuImpar(9);
    parOuImpar(7);
    return 0;
}

void parOuImpar(int number){
    if (number % 2 == 0) {
        printf("par"); // even
    }
    else {
        printf("impar"); // odd
    }
}
