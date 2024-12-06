/*
  Roll No.: 47
  Student Name: KAIF BARUDGAR
  Program Title: convert fahrenheit itno celsius

  Task Given By:
    - Roll No. of Assignee: 33
    - Assignee Name: SHAQUIB QURESHI
*/
#include<stdio.h>
int main(){
   float fahrenheit, celsius;
   //get the limit of fibonacci series
   printf("Enter Fahrenheit: ");
   scanf("%f",&fahrenheit);
   celsius = (fahrenheit - 32)*5/9;
   printf("Celsius: %f ", celsius);
   return 0;
}
