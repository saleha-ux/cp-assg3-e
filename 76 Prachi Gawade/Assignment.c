/*
Name :- Prachi Gawade 
Roll No :- 76 
UIN :- 241S076
Title :- WAP to find sum of odd numbers 

Given by :- Anjali Mhaske 
Roll No :- 21
UIN :- 241S026
*/

#include<stdio.h>
int main(){
int start_num,end_num,sum=0,i;
printf("\t\t\t***Sum of Odd number***\n\n\n ");
//Take user input
printf("Enter Start Number: " );
scanf("%d",&start_num);
printf("Enter End Number: ");
scanf("%d",&end_num);
//Check if starting number is greter than ending
if(start_num > end_num){
    printf("Error. Ending number should be higher than starting number.");
    return 1;
}
//Add all odd number
for(i=start_num; i<=end_num;i++){
    if(i%2!=0)
    sum=sum+i;
}
printf("Sum of all odd number between %d and %d=%d", start_num,end_num,sum);
return 0;
}
