// Crie um programa que peça ao usuário para inserir uma string e uma letra. O programa deve
// então contar quantas vezes essa letra aparece na string.

// Create a program that asks the user to enter a string and a letter. The program must
// then count how many times that letter appears in the string.

#include<stdio.h>
#include<string.h>

int main()
{
  char text[100];
  char letter;
  int count = 0;
  int length;

  printf("Enter a string: ");
  scanf("%s", text);

  printf("Enter a letter: ");
  scanf(" %c", &letter);

  length = strlen(text);

  for (int i = 0; i < length; i++)
  {
    if (text[i] == letter)
    {
      count++;
    }
  }

  printf("The letter '%c' appears %d times in the string \"%s\".\n", letter, count, text);

  return 0;
}
