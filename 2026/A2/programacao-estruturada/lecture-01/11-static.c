// Crie uma função que declare uma variável estática. A função deve incrementar
// o valor da variável estática e imprimir o seu valor. Chame esta função várias
// vezes no seu programa principal e observe o comportamento da variável estática.
//
// Create a function that declares a static variable. The function should
// increment the static variable's value and print it. Call this function
// several times from main and observe the behavior of the static variable.

#include<stdio.h>

void incrementAndPrintStatic();

int main()
{
    incrementAndPrintStatic();
    incrementAndPrintStatic();
    incrementAndPrintStatic();

    return 0;
}

void incrementAndPrintStatic(){
    static int staticInt = 0; // This variable retains its value between function calls
    staticInt++;
    printf("The value of the static variable is: %d\n", staticInt);
}
