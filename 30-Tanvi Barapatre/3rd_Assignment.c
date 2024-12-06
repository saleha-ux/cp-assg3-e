/*
  Roll No.: 30
  Student Name: Tanvi Rajendra Barapatre
  Program Title: Student record display system

  Task Given By:
    - Roll No. of Assignee: 31
    - Assignee Name: Shweta Dinesh Singh
*/

#include <stdio.h>
struct student_record
{
    int marks;
    char name[30];
    int roll_no;
};

int main()
{
    int i,n;

    printf("How many students are there : ");
    scanf("%d",&n);
    
    if (n<=0) {
        printf("Invalid number of students. \n");
        return 1;
    }
    

    struct student_record s1[n];
    for(i=0; i<n; i++){
        printf("Enter Student Details %d \n ",i+1);
        printf("\n");
        printf("Enter Name : ");
        scanf("%s",s1[i].name);
        printf("\n");
        printf("Enter Marks : ");
        scanf("%d",&s1[i].marks);
        printf("\n");
        printf("Enter Roll_no : ");
        scanf("%d",&s1[i].roll_no);
        printf("\n\n");
    }

    printf("\t\t****STUDENTS DETAILS****\n\n");
    for(i=0; i<n; i++){
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", s1[i].name);
        printf("Marks: %d\n", s1[i].marks);
        printf("Roll Number: %d\n\n", s1[i].roll_no);
    }

    return 0;
}

/* 

OUTPUT :

How many students are there : 2
Enter Student Details 1 
 
Enter Name : Tanvi 

Enter Marks : 90

Enter Roll_no : 30


Enter Student Details 2

Enter Name : Shweta

Enter Marks : 90

Enter Roll_no : 31


                ****STUDENTS DETAILS****

Student 1
Name: Tanvi
Marks: 90
Roll Number: 30

Student 2
Name: Shweta
Marks: 90
Roll Number: 31

*/