// Escreva um algoritmo que leia dois valores numéricos
// e que pergunte ao usuário qual operação ele deseja realizar: adição (+), subtração (-), multiplicação (*)ou divisão (/).
// Exiba na tela o resultado da operação desejada.

// Write an algorithm that reads two numeric values
// and asks the user which operation they want to perform: addition (+), subtraction (-), multiplication (*) or division (/).
// Display the result of the desired operation on the screen.

#include<stdio.h>

float calculate(char operation, float x, float y);

int main()
{
    float x, y;
    char op;

    printf("Type a number and hit `Enter` two times, then choose the desired operation.\n");

    printf(": ");
    scanf("%f", &x);

    printf(": ");
    scanf("%f", &y);

    printf("Select the operation: + (addition), - (substraction), * (multiplication), / (division)\n");
    printf(": ");
    scanf(" %c", &op); // this space before the `%c` is to skip the `\n` from the enter of the last user input

    printf("%f %c %f = %f\n", x, op, y, calculate(op, x, y));

    return 0;
}

float calculate(char operation, float x, float y)
{
    float result;

    switch (operation)
    {
    case '+':
        result = x + y;
        break;

    case '-':
        result = x - y;
        break;

    case '*':
        result = x * y;
        break;

    case '/':
        result = x / y;
        break;

    default:
        return 0;
        break;
    }

    return result;
}
