// Crie um programa que declare um array de 30 caracteres para receber um nome, permita que o
// usuário digite o seu nome, e então imprima os caracteres na ordem em que foram inseridos e em
// ordem inversa.

// Create a program that declares an array of 30 characters to receive a name, allow the user to
// type their name, and then print the characters in the order they were inserted and in reverse order.

#include<stdio.h>
#include<string.h>

int main()
{
  char name[30];
  int length;

  printf("Enter your name: ");
  scanf("%s", name);

  length = strlen(name);

  printf("Forward: ");
  for (int i = 0; i < length; i++)
  {
    printf("%c", name[i]);
  }
  printf("\n");

  printf("Reverse: ");
  for (int i = length - 1; i >= 0; i--)
  {
    printf("%c", name[i]);
  }
  printf("\n");

  return 0;
}
