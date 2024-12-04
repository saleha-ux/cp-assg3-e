/*
Name: ZIBA KHAN
Roll no: 06
UIN: 241S006
TITLE: WAP TO FIND EVEN AND ODD

Given By: UZMA KHAN
Roll no: 48
UIN: 241064
*/

#include<stdio.h>
int main()
{
    int number;
    printf("Enter Your Number\n");
    scanf("%d",&number);
    if (number % 2 == 0)
    {
        printf("%d is a Even number",number);
    }
    else
    {
        printf("%d is an Odd Number",number);
    }
    
    return 0;    
}