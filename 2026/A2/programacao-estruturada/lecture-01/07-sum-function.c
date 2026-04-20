// Crie uma função que recebe um array de inteiros e seu tamanho e retorna a soma de todos os
// elementos do array. Use essa função em seu programa principal.

// Create a function that receives an array of integers and its size and returns the sum of all
// elements in the array. Use this function in your main program.

#include<stdio.h>

int sumArray(int arr[], int size);

int main()
{
  int numbers[5];
  int total;

  for (int i = 0; i < 5; i++)
  {
    // COMPLETE INPUT CODE
  }

  total = sumArray(/* COMPLETE: pass array and size */);

  // COMPLETE: print total

  return 0;
}

int sumArray(int arr[], int size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    // COMPLETE: add arr[i] to sum
  }

  return /* COMPLETE */;
}
