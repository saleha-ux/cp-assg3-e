Name:Shaikh Saleha 
UIN-241S036 
ROLL NO:29
DIV-E 
TASK:DEMONSTRATE THE USE OF POINTERS BY SWAPPING TWO NO. 

TASK GIVEN BY
NAME:AFREEN SHAIK 
UIN-241S015
ROLL NO 15
DIV-E 





#include <stdio.h>


void swap(int *x, int *y) {
    int temp = *x;  // Store the value at x's address in temp
    *x = *y;        // Assign the value at y's address to x
    *y = temp;      // Assign the value stored in temp to y
}

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call the swap function using pointers
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}Enter two numbers: 5678
7895
Before swapping: a = 5678, b = 7895
After swapping: a = 7895, b = 5678

[Process completed - press Enter]
