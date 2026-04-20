// Crie um programa que declare um array de 10 inteiros, preencha o array com números de 1 a 10,
// e então imprima a soma de todos os elementos.

// Create a program that declares an array of 10 integers, fills the array with numbers from 1 to 10,
// and then prints the sum of all elements.

#include<stdio.h>

int main()
{
  int array[10];
  int sum = 0;

  for (int i = 0; i < 10; i++)
  {
    array[i] = i + 1;
  }

  for (int i = 0; i < 10; i++)
  {
    sum += array[i];
  }

  printf("The sum of the elements is: %d\n", sum);

  return 0;
}
