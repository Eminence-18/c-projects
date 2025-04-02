#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Patient {
    char name[50];
    int age;
    char disease[50];
    char appointment_time[20];
};

void addPatient() {
    FILE *fptr;
    struct Patient p;

    fptr = fopen("patients.txt", "a");

    printf("Enter patient's name:\n");
    scanf("%s", p.name);
    printf("Enter patient's age:\n");
    scanf("%d", &p.age);
    printf("Enter disease:\n");
    scanf("%s", &p.disease);
    printf("Enter appointment time:\n");
    scanf("%s", &p.appointment_time);

    fprintf(fptr, "Name: %s\nAge: %d\nDisease: %s\nAppointment Time: %s\n\n", p.name, p.age, p.disease, p.appointment_time);

    fclose(fptr);
    printf("Patient added successfully!\n");
}

void viewPatients() {
    FILE *fptr;
    char ch;

    fptr = fopen("patients.txt", "r");

    if (fptr == NULL) {
        printf("No records found.\n");
        return;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }

    fclose(fptr);
}

int main() {
    int choice;

    while (1) {
        printf("\nHospital Management System\n");
        printf("1. Add Patient\n");
        printf("2. View Patients\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPatient();
            break;
            case 2:
                viewPatients();
            break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
