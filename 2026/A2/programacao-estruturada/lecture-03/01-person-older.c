// Crie uma estrutura Pessoa com nome e idade. Leia os dados de duas pessoas e exiba quem e a
// mais velha, usando funcoes para comparar e imprimir o resultado.

// Create a Person struct with name and age. Read data for two people and display who is older,
// using functions to compare and print the result.

#include <stdio.h>
#include <string.h>

#define NAME_LEN 50

typedef struct {
    char name[NAME_LEN + 1];
    int age;
} Person;

Person read_person(void);
int compare_age(Person a, Person b);
void print_older(Person a, Person b, int comparison);

int main(void)
{
    Person p1, p2;
    int comparison;

    p1 = read_person();
    p2 = read_person();

    comparison = compare_age(p1, p2);

    print_older(p1, p2, comparison);

    return 0;
}

Person read_person(void)
{
    Person p = {0};

    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);

    p.name[strcspn(p.name, "\n")] = '\0'; // Remove newline from name input

    printf("Enter age: ");
    scanf("%d", &p.age); // Read age

    return p;
}

int compare_age(Person a, Person b)
{
    // COMPLETE: Return 1 if a is older, -1 if b is older, or 0 if tied
    if (a.age > b.age) {
        return 1;
    }

    if (a.age < b.age) {
        return -1;
    }

    return 0;
}

void print_older(Person a, Person b, int comparison)
{
    switch (comparison) {
        case 1:
            printf("The older person is: %s\n", a.name);
            break;
        case -1:
            printf("The older person is: %s\n", b.name);
            break;
        case 0:
            printf("Both people have the same age.\n");
            break;
    }
}
