/*
roll no.-26
student name-Hussain Sitamouwala 
program title-Define a structure to store student details


task given by:
roll no. of assignee:33
assignee name- shaqib qureshi


*/
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
};

void searchByID(struct Student students[], int count, int searchID) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (students[i].id == searchID) {
            printf("Student Found: ID: %d, Name: %s\n", students[i].id, students[i].name);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with ID %d not found.\n", searchID);
    }
}

void searchByName(struct Student students[], int count, char searchName[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student Found: ID: %d, Name: %s\n", students[i].id, students[i].name);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with Name '%s' not found.\n", searchName);
    }
}

int main() {
    int count;
    printf("Enter the number of students: ");
    scanf("%d", &count);

    struct Student students[count];

    // Input student details
    for (int i = 0; i < count; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces
    }

    int choice;
    do {
        printf("\nSearch Options:\n");
        printf("1. Search by ID\n");
        printf("2. Search by Name\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int searchID;
                printf("Enter ID to search: ");
                scanf("%d", &searchID);
                searchByID(students, count, searchID);
                break;
            }
            case 2: {
                char searchName[50];
                printf("Enter Name to search: ");
                scanf(" %[^\n]", searchName); // Read string with spaces
                searchByName(students, count, searchName);
                break;
            }
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
