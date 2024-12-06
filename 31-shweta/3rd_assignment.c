/*
  Roll No.: 31
  Student Name: Shweta Dinesh Singh
  Program Title: Program to reverse a integer

  Task Given By:
    - Roll No. of Assignee: 30
    - Assignee Name: Tanvi Rajendra Barapatre
*/

#include <stdio.h>

int main() {
    int num, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);
    return 0;
}

/*
    OUTPUT:
    
    Enter an integer: 25
    Reversed Number = 52


*/