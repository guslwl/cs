// Crie um programa em C que declare variáveis de cada um dos tipos básicos atribua valores as variáveis criadas e, em seguida, imprima seus valores.
// Write a program in C that declare variables for each of the primitive types, assign values to them and print their values

#include<stdio.h>

int main()
{
    int int_number = 69;
    float float_number = 69.420;
    double double_number = 3.141592653;

    char single_char = 'L';

    printf("primitive types:\n\tint: %i\n\tfloat: %f\n\tdouble: %lf\n\n\tchar:%c\n", int_number, float_number, double_number, single_char);

    return 0;
}
