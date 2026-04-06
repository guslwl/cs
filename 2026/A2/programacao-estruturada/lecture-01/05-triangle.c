// Crie um programa em C que peça ao usuário que insira a base e a altura
// de um triângulo (números de ponto flutuante), e depois calcule e imprima
// a área desse triângulo.
//
// Create a C program that asks the user to enter the base and height
// of a triangle (floating-point numbers), then computes and prints
// the area of that triangle.

#include<stdio.h>

int main()
{
    float base, height, area;

    printf("Type the base: ");
    scanf("%d", &base);

    printf("Type the height: ");
    scanf("%f", &height);

    area = (base * height) / 2;
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
