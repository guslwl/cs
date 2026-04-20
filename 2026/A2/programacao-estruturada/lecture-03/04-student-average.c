// Defina uma estrutura Aluno com os campos nome, matricula e 3 notas. Leia os dados de 5 alunos
// e calcule a media de cada um, indicando se esta aprovado (media >= 7).
// Define a Student struct with name, registration number, and 3 grades. Read data for 5 students,
// calculate each average, and indicate whether each one passed (average >= 7).

#include <stdio.h>

#define NAME_LEN 50
#define TOTAL_STUDENTS 5
#define TOTAL_GRADES 3
#define PASSING_GRADE 7.0

typedef struct {
    char name[NAME_LEN + 1];
    int registration;
    float grades[TOTAL_GRADES];
} Student;

void read_students(Student students[], int size);
float calculate_average(const Student *student);
void print_results(const Student students[], int size);

int main(void)
{
    Student students[TOTAL_STUDENTS];

    read_students(students, TOTAL_STUDENTS);

    print_results(students, TOTAL_STUDENTS);

    return 0;
}

void read_students(Student students[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline

        printf("Enter registration number for student %d: ", i + 1);
        scanf("%d", &students[i].registration);

        printf("Enter %d grades for student %d:\n", TOTAL_GRADES, i + 1);
        for (int j = 0; j < TOTAL_GRADES; j++) {
            printf("Grade %d: ", j + 1);
            scanf("%f", &students[i].grades[j]);
        }
        getchar(); // Consume newline after last grade input
    }
}

float calculate_average(const Student *student)
{
    float sum = 0.0f;

    for (int i = 0; i < TOTAL_GRADES; i++) {
        sum += student->grades[i];
    }
    return sum / TOTAL_GRADES;

}

void print_results(const Student students[], int size)
{
    for (int i = 0; i < size; i++) {
        float average = calculate_average(&students[i]);
        printf("Name: %s, Registration: %d, Average: %.2f", students[i].name, students[i].registration, average);
        if (average >= PASSING_GRADE) {
            printf(" - Approved\n");
        } else {
            printf(" - Reproved\n");
        }
    }
}
