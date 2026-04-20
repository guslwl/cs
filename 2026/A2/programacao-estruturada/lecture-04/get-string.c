// Esse codigo define uma função get_string que lê uma string da entrada do usuário e a retorna como uma string alocada dinamicamente.
// A função main demonstra como usar get_string e lida com o gerenciamento de memória adequadamente, liberando a memória alocada após o uso.

// Este código foi escrito como um exemplo para uma aula sobre programação estruturada (porque os exercícios eram muito chatos)

// This code defines a function get_string that reads a string from the user input and returns it as a dynamically allocated string.
// The main function demonstrates how to use get_string and handles memory management properly by freeing the allocated memory after use.

// This code was written as an example for a lecture on structured programming (because the exercises were too boring)

#include <stdio.h>
#include <stdlib.h>

char *get_string(const char *prompt);

int main()
{

    char *input = get_string("Enter a string: ");

    if (input == NULL)
    {
        printf("error while allocating memory");
        return -1;
    }

    printf("\ninput: '%s'\n", input);

    free(input);

    return 0;
}

char *get_string(const char *prompt){
    char *str;

    int capacity = 10;
    int lenght = 0;

    str = malloc(10);

    if (str == NULL)
    {
        printf("Error while allocating memory");
        return NULL;
    }

    if (prompt != NULL) {
        printf("%s", prompt);
    }

    while (1) {
        if (lenght + 2 >= capacity) {
            char *tmp = realloc(str, capacity + 10);

            if (tmp == NULL)
            {
                free(str);
                printf("Error while reallocating memory");
                return NULL;
            }

            str = tmp;

            capacity += 10;
        }

        int this_char = fgetc(stdin);

        if (this_char == -1 || this_char == '\n') {
            break;
        }

        str[lenght] = this_char;
        lenght++;

    }

    str[lenght] = '\0';

    return str;
}
