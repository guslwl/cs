// Crie um programa que declare duas variáveis globais. Uma função deve modificar
// o valor dessas variáveis. Outra função deve imprimir o valor dessas variáveis.
//
// Create a program that declares two global variables. One function should modify
// the value of those variables. Another function should print the values of those variables.

#include<stdio.h>

int GLOBAL_INT1;
int GLOBAL_INT2;

void setGlobalInts(int value1, int value2);
void printGlobalInts();

int main()
{
    setGlobalInts(42, 69);
    printGlobalInts();

    return 0;
}

void setGlobalInts(int value1, int value2){
    GLOBAL_INT1 = value1;
    GLOBAL_INT2 = value2;
}

void printGlobalInts(){
    printf("The value of the first global variable is: %d\n", GLOBAL_INT1);
    printf("The value of the second global variable is: %d\n", GLOBAL_INT2);
}
