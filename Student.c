#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    int grade;
    char letter;
} Student;

void averages(Student student[], int count);
void printAll(Student student[], int count);
char getLetterGrade(int grade);
void addStudent(Student student[], int *count, char name[], int grade);  // FIXED prototype

int main(void) {
    Student student[100];

    student[0] = (Student){"Neel Manro", 90, getLetterGrade(90)};
    student[1] = (Student){"Vikas Manro", 80, getLetterGrade(80)};
    student[2] = (Student){"Sonia Manro", 60, getLetterGrade(60)};
    student[3] = (Student){"Manav Manro", 20, getLetterGrade(20)};
    
    int count = 4;

    int entry;
    printf("Menu:\n");
    printf("1 - Print all students\n");
    printf("2 - Show average grade\n");
    printf("3 - Print all students and show average\n");
    printf("4 - Add student\n");

    do {
        printf("Enter your choice (1, 2, 3 or 4): ");
        scanf("%d", &entry);
        if (entry < 1 || entry > 4) {
            printf("Invalid choice. Please enter 1, 2, 3 or 4.\n");
        }
    } while (entry < 1 || entry > 4);
    
    if (entry == 1) {
        printAll(student, count);
    } else if (entry == 2) {
        averages(student, count);
    } else if (entry == 3) {
        printAll(student, count);
        averages(student, count);
    } else if (entry == 4) {
        char nameInput[100];
        int gradeInput;

        printf("Enter new student name: ");
        scanf(" %[^\n]", nameInput);

        do {
            printf("Enter grade (0-100): ");
            scanf("%d", &gradeInput);
        } while (gradeInput < 0 || gradeInput > 100);

        addStudent(student, &count, nameInput, gradeInput);
        printf("Student added!\n");
        printAll(student, count);
    }

    return 0;
}

void printAll(Student student[], int count) {
    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s\n", student[i].name);
        printf("Grade: %d\n", student[i].grade);
        printf("Letter Grade: %c\n", student[i].letter);
        printf("--------------------\n");
    }
}

void averages(Student student[], int count) {
    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += student[i].grade;
    }
    double average = sum / count;
    printf("\nAverage of all students: %.2f\n", average);
}

char getLetterGrade(int grade) {
    if (grade >= 90) return 'A';
    else if (grade >= 80) return 'B';
    else if (grade >= 70) return 'C';
    else if (grade >= 60) return 'D';
    else return 'F';
}


void addStudent(Student student[], int *count, char name[], int grade) {
    strcpy(student[*count].name, name);
    student[*count].grade = grade;
    student[*count].letter = getLetterGrade(grade);
    (*count)++;  // update actual count
}
