// Crie um programa que peça ao usuário para inserir duas strings. Depois, o programa deve
// concatenar (juntar) essas duas strings e imprimir o resultado.

// Create a program that asks the user to enter two strings. Then, the program must
// concatenate (join) these two strings and print the result.

#include<stdio.h>
#include<string.h>

int main()
{
  char first[50];
  char second[50];
  char result[100];

  printf("Enter the first string: ");
  scanf("%s", first);

  printf("Enter the second string: ");
  scanf("%s", second);

  strcpy(result, first);

  strcat(result, second);

  // COMPLETE: print result
  printf("The concatenated string is: %s\n", result);

  return 0;
}
