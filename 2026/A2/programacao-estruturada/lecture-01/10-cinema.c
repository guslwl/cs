// Implemente um programa em linguagem C que simule o sistema de reservas de assentos de uma
// sala de cinema com 5 fileiras e 5 colunas. O programa deve exibir o estado atual dos assentos
// (livres ou ocupados), permitir ao usuário reservar um assento informando a fileira e a coluna
// desejadas, verificar se o assento está disponível e atualizar o mapa da sala. O programa deve
// continuar executando até que o usuário digite o comando 'SAIR'.

// Implement a C program that simulates a seat reservation system for a cinema room with
// 5 rows and 5 columns. The program must display the current state of the seats (free or occupied),
// allow the user to reserve a seat by entering the desired row and column, verify if the seat is
// available and update the room map. The program must keep running until the user types 'SAIR'.

#include<stdio.h>
#include<string.h>

#define ROWS 5
#define COLS 5

void printSeats(int seats[ROWS][COLS]);

int main()
{
  int seats[ROWS][COLS];
  char command[10];
  int row, col;

  // COMPLETE: initialize all seats to 0 (free)

  while (1)
  {
    printSeats(seats);

    printf("Enter row and column to reserve, or 'SAIR' to exit: ");
    // COMPLETE: read command; if it equals "SAIR", break out of the loop

    // COMPLETE: read row and col from command (or read them separately)
    // COMPLETE: validate that row and col are within bounds (1-5)
    // COMPLETE: check if seats[row-1][col-1] is free (0); if so, mark it as 1 (occupied)
    //           otherwise, inform that the seat is already taken
  }

  return 0;
}

void printSeats(int seats[ROWS][COLS])
{
  printf("\n  1 2 3 4 5\n");

  for (int i = 0; i < ROWS; i++)
  {
    printf("%d ", i + 1);
    for (int j = 0; j < COLS; j++)
    {
      // COMPLETE: print 'O' if seats[i][j] == 1 (occupied), otherwise print '.'
    }
    printf("\n");
  }
  printf("\n");
}
