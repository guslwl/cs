// Crie um programa que declare um array (vetor) de 5 inteiros, permita que o usuário preencha
// esse array, e ao final imprima os números na ordem inversa.

// Create a program that declares an array of 5 integers, allow the user to write in this array
// and print the numbers in the reversed order.

#include<stdio.h>

int main()
{
  int array[5];

  for (int i = 0; i < 5; i++)
  {
    printf("%d. integer: ", i + 1);
    scanf("%d", &array[i]);
    printf("\n");
  }

  for (int i = 4; i >= 0; i--)
  {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}
