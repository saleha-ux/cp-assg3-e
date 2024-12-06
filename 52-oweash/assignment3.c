/*
  Roll No.:52
  Student Name:Oweash Akbar Sayyed
  Program Title: GRADE CALCULATOR

  Task Given By:
    - Roll No. of Assignee:10
    - Assignee Name: bashir ahmed
*/

#include <stdio.h>

char calculateGrade(float avg)
{
    if (avg >= 90)
        return 'A';
    else if (avg >= 75)
        return 'B';
    else if (avg >= 50)
        return 'C';
    else if (avg >= 35)
        return 'D';
    else
        return 'F';
}

void calculateResults(float marks[], int n, float *total, float *average)
{
    *total = 0;
    for (int i = 0; i < n; i++)
    {
        *total += marks[i];
    }
    *average = *total / n;
}

int main()
{
    float marks[5];
    float total, average;
    char grade;

    printf("=====================================\n");
    printf("  Welcome to the Grade Calculator!  \n");
    printf("=====================================\n\n");

    const char *subjects[] = {"Physics", "Chemistry", "Mathematics", "English", "Programming"};

    printf("Please enter your marks for the following subjects:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s: ", subjects[i]);
        scanf("%f", &marks[i]);
    }

    calculateResults(marks, 5, &total, &average);
    grade = calculateGrade(average);

    printf("\n--- Results ---\n");
    printf("Total Marks   : %.2f\n", total);
    printf("Average Marks : %.2f\n", average);
    printf("Grade         : %c\n", grade);

    printf("\nThank you for using the Grade Calculator. Have a great day!\n");

    return 0;
}
