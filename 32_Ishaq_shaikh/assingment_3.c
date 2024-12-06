/*
  Roll No.: 32
  Student Name: Shaikh Ishaq Hanif
  Program Title: Shape Area Calculator

  Task Given By:
    - Roll No. of Assignee: 10
    - Assignee Name: Bashir Ahmed
*/
#include <stdio.h>
#include <math.h>

void calculateCircleArea();
void calculateRectangleArea();
void calculateTriangleArea();
void calculateSquareArea();

int main() {
    int choice;
    do {
        printf("\n==== Shape Area Calculator ====\n");
        printf("1. Circle\n");
        printf("2. Rectangle\n");
        printf("3. Triangle\n");
        printf("4. Square\n");
        printf("5. Exit\n");
        printf("Choose a shape to calculate its area (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                calculateCircleArea();
                break;
            case 2:
                calculateRectangleArea();
                break;
            case 3:
                calculateTriangleArea();
                break;
            case 4:
                calculateSquareArea();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option (1-5).\n");
        }
    } while (choice != 5);

    return 0;
}

void calculateCircleArea() {
    float radius, area;
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &radius);
    if (radius > 0) {
        area = M_PI * radius * radius;
        printf("The area of the circle is: %.2f\n", area);
    } else {
        printf("Invalid radius. Please enter a positive value.\n");
    }
}

void calculateRectangleArea() {
    float length, width, area;
    printf("\nEnter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    if (length > 0 && width > 0) {
        area = length * width;
        printf("The area of the rectangle is: %.2f\n", area);
    } else {
        printf("Invalid dimensions. Please enter positive values.\n");
    }
}

void calculateTriangleArea() {
    float base, height, area;
    printf("\nEnter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    if (base > 0 && height > 0) {
        area = 0.5 * base * height;
        printf("The area of the triangle is: %.2f\n", area);
    } else {
        printf("Invalid dimensions. Please enter positive values.\n");
    }
}

void calculateSquareArea() {
    float side, area;
    printf("\nEnter the side length of the square: ");
    scanf("%f", &side);
    if (side > 0) {
        area = side * side;
        printf("The area of the square is: %.2f\n", area);
    } else {
        printf("Invalid side length. Please enter a positive value.\n");
    }
}
