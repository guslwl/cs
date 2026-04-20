// Crie duas estruturas: Endereco (rua, numero, cidade) e Pessoa (nome, idade, endereco).
// Cadastre 3 pessoas e mostre seus dados completos. Use estruturas aninhadas.

// Create two structs: Address (street, number, city) and Person (name, age, address).
// Register 3 people and print their complete data. Use nested structs.

#include <stdio.h>
#include <string.h>

#define NAME_LEN 50
#define STREET_LEN 60
#define CITY_LEN 40
#define TOTAL_PEOPLE 3

typedef struct {
    char street[STREET_LEN + 1];
    int number;
    char city[CITY_LEN + 1];
} Address;

typedef struct {
    char name[NAME_LEN + 1];
    int age;
    Address address;
} Person;

void read_person(Person *p);
void print_person(const Person *p);

int main(void)
{
    Person people[TOTAL_PEOPLE];

    for (int i = 0; i < TOTAL_PEOPLE; i++) {
        printf("Enter details for person %d:\n", i + 1);
        read_person(&people[i]);
    }

    printf("\nRegistered People:\n");
    for (int i = 0; i < TOTAL_PEOPLE; i++) {
        printf("\nPerson %d:\n", i + 1);
        print_person(&people[i]);
    }

    return 0;
}

void read_person(Person *p)
{
    // COMPLETE: Read person fields including nested address fields
    printf("Enter name: ");
    fgets(p->name, sizeof(p->name), stdin);
    p->name[strcspn(p->name, "\n")] = '\0'; // Remove newline from name input

    printf("Enter age: ");
    scanf("%d", &p->age);
    getchar(); // Consume newline after age input

    printf("Enter street: ");
    fgets(p->address.street, sizeof(p->address.street), stdin);
    p->address.street[strcspn(p->address.street, "\n")] = '\0'; // Remove newline from street input

    printf("Enter number: ");
    scanf("%d", &p->address.number);
    getchar(); // Consume newline after number input

    printf("Enter city: ");
    fgets(p->address.city, sizeof(p->address.city), stdin);
    p->address.city[strcspn(p->address.city, "\n")] = '\0'; // Remove newline from city input

}

void print_person(const Person *p)
{
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Street: %s\n", p->address.street);
    printf("Number: %d\n", p->address.number);
    printf("City: %s\n", p->address.city);
}
