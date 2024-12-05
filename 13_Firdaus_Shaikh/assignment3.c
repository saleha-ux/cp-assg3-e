/*
Roll No.: 13
Student Name: Firdaus Shaikh
Program Title: A menu driven calculator for converting temperature

Task Given By: 
  -Roll NO. Of Assignee: 45
  -Assignee Name: Zoya Shaikh
/*
  
  
#include <stdio.h>

void celsiusToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
}

void celsiusToKelvin(float celsius) {
    float kelvin = celsius + 273.15;
    printf("%.2f Celsius is equal to %.2f Kelvin\n", celsius, kelvin);
}

void kelvinToFahrenheit(float kelvin) {
    float fahrenheit = (kelvin - 273.15) * 9/5 + 32;
    printf("%.2f Kelvin is equal to %.2f Fahrenheit\n", kelvin, fahrenheit);
}

int main() {
    int choice;
    float temperature;

    while (1) {
        // Display the menu
        printf("\nTemperature Conversion Menu:\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Celsius to Kelvin\n");
        printf("3. Kelvin to Fahrenheit\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temperature);
                celsiusToFahrenheit(temperature);
                break;
            case 2:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temperature);
                celsiusToKelvin(temperature);
                break;
            case 3:
                printf("Enter temperature in Kelvin: ");
                scanf("%f", &temperature);
                kelvinToFahrenheit(temperature);
                break;
            case 4:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

return 0;
}

/*
OUTPUT

Temperature Conversion Menu:
1. Celsius to Fahrenheit
2. Celsius to Kelvin
3. Kelvin to Fahrenheit
4. Exit
Enter your choice: 1
Enter temperature in Celsius: 32
32.00 Celsius is equal to 89.60 Fahrenheit

Temperature Conversion Menu:
1. Celsius to Fahrenheit
2. Celsius to Kelvin
3. Kelvin to Fahrenheit
4. Exit
Enter your choice: 2
Enter temperature in Celsius: 45
45.00 Celsius is equal to 318.15 Kelvin

Temperature Conversion Menu:
1. Celsius to Fahrenheit
2. Celsius to Kelvin
3. Kelvin to Fahrenheit
4. Exit
Enter your choice: 3
Enter temperature in Kelvin: 253
253.00 Kelvin is equal to -4.27 Fahrenheit

Temperature Conversion Menu:
1. Celsius to Fahrenheit
2. Celsius to Kelvin
3. Kelvin to Fahrenheit
4. Exit
Enter your choice: 4
Exiting program...

/*