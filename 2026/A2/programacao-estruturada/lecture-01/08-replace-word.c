// Escreva um programa em C que leia um parágrafo de texto e substitua todas as ocorrências de
// uma palavra incorreta por uma palavra correta, informando ao final o texto corrigido e o número
// de substituições realizadas.

// Write a C program that reads a paragraph of text and replaces all occurrences of
// an incorrect word with a correct word, reporting at the end the corrected text and the number
// of substitutions made.

#include<stdio.h>
#include<string.h>

int main()
{
  char paragraph[500];
  char wrong[50];
  char correct[50];
  char result[500];
  int count = 0;

  printf("Enter paragraph: ");
  fgets(paragraph, sizeof(paragraph), stdin);

  printf("Enter wrong word: ");
  // COMPLETE: read wrong word

  printf("Enter correct word: ");
  // COMPLETE: read correct word

  // COMPLETE: iterate through paragraph searching for occurrences of wrong
  //   - when found, copy correct into result and increment count
  //   - otherwise copy the current character into result

  printf("Corrected text: %s\n", result);
  printf("Substitutions: %d\n", count);

  return 0;
}
