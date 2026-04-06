// Crie uma função que declare uma variável estática e outra função que declare
// uma variável automática (não-estática). Ambas as funções devem incrementar o valor
// das respectivas variáveis e imprimir o seu valor. Chame estas funções várias vezes
// no seu programa principal e observe o comportamento das variáveis estática e automática.
//
// Create a function that declares a static variable and another function that declares
// an automatic (non-static) variable. Both functions should increment their respective
// variables and print the values. Call these functions multiple times from main and
// observe the behavior of the static and automatic variables.

#include<stdio.h>

void declareStaticVariable();
void declareAutomaticVariable();

int main()
{
    declareStaticVariable();
    declareStaticVariable();
    declareStaticVariable();

    declareAutomaticVariable();
    declareAutomaticVariable();
    declareAutomaticVariable();

    return 0;
}

void declareStaticVariable(){
    static int staticInt = 0; // This variable retains its value between function calls
    staticInt++;
    printf("The value of the static variable is: %d\n", staticInt);
}

void declareAutomaticVariable(){
    int automaticInt = 0; // This variable is reinitialized every time the function is called
    automaticInt++;
    printf("The value of the automatic variable is: %d\n", automaticInt);
}
