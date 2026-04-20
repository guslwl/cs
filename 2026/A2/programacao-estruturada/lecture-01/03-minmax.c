// Crie um programa que declare um array de 5 números de ponto flutuante, permita que o usuário
// preencha o array, e então imprima o maior e o menor número.

// Create a program that declares an array of 5 floating-point numbers, allow the user to fill
// the array, and then print the largest and smallest number.

#include<stdio.h>

int main()
{
  float array[5];
  float max, min;

  for (int i = 0; i < 5; i++)
  {
    printf("%d float: ", i + 1);
    scanf("%f", &array[i]);
  }

  max = array[0];
  min = array[0];

  for (int i = 1; i < 5; i++)
  {
    // COMPLETE: update max if array[i] is greater than max
    if (array[i] > max)
    {
      max = array[i];
    }
    // COMPLETE: update min if array[i] is less than min
    if (array[i] < min)
    {
      min = array[i];
    }
  }

  // COMPLETE: print max and min
  printf("The largest number is: %f\n", max);
  printf("The smallest number is: %f\n", min);

  return 0;
}
