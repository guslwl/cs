// Crie um programa que declare uma variável global e uma função.
// A função deve modificar o valor da variável global para o valor informado pelo usuário
// e o programa principal deve imprimir este valor.
//
// Create a program that declares a global variable and a function.
// The function should modify the global variable to the value provided by the user
// and the main program should print this value.

#include<stdio.h>

int GLOBAL_INT;

void setGlobalInt(int value);

int main()
{
    setGlobalInt(42);
    printf("The value of the global variable is: %d\n", GLOBAL_INT);
    return 0;
}

void setGlobalInt(int value){
    GLOBAL_INT = value;
}
