// Uma escola deseja criar um sistema para cadastrar alunos e verificar se sao maiores de idade.
// Cada aluno tem um nome e uma idade. O nome pode ter no maximo 50 caracteres. Apos cadastrar
// 4 alunos, o sistema deve exibir os nomes e idades dos alunos maiores de idade (18 anos ou mais).

// A school wants a system to register students and verify whether they are adults.
// Each student has a name and an age. Name length is up to 50 characters. After registering
// 4 students, the system must display names and ages of adult students (18 or older).

#include <stdio.h>
#include <string.h>

#define NAME_LEN 50
#define TOTAL_STUDENTS 4
#define ADULT_AGE 18

typedef struct {
    char name[NAME_LEN + 1];
    int age;
} Student;

void read_students(Student students[], int size);
void print_adult_students(const Student students[], int size);

int main(void)
{
    Student students[TOTAL_STUDENTS];

    read_students(students, TOTAL_STUDENTS);

    print_adult_students(students, TOTAL_STUDENTS);

    return 0;
}

void read_students(Student students[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline

        printf("Enter age for student %d: ", i + 1);
        scanf("%d", &students[i].age);
        getchar(); // Consume newline after age input
    }
}

void print_adult_students(const Student students[], int size)
{
    printf("Adult Students:\n");
    for (int i = 0; i < size; i++) {
        if (students[i].age >= ADULT_AGE) {
            printf("Name: %s, Age: %d\n", students[i].name, students[i].age);
        }
    }
}
