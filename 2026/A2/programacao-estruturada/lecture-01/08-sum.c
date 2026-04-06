// Crie uma função que recebe dois números inteiros e retorna a soma deles.
// Utilize essa função em seu programa principal.
//
// Create a function that receives two integers and returns their sum.
// Use that function in your main program.

#include<stdio.h>

int sumInt(int x, int y);

int main()
{
    int result = sumInt(10, 20);

    printf("The `result` is %d", result);

    return 0;
}

int sumInt(int x, int y) {
    return x + y;
}
