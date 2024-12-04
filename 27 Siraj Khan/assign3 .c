/*
Name : Siraj Khan
UIN : 241S034  
Roll no : 27
Div : E
Task : Swaping of two numbers or variables without using temporary variable.  
  
  task given by 
Name : Kamran Shaikh 
UIN : 241S012
Roll no : 12
Div : E  
          */
  
  #include <stdio.h>

int main(){
    int a,b;
    printf("Enter value of a = ");
    scanf("%d", &a);
    printf("Enter Value of b = ");
    scanf("%d", &b);
    a= a + b;
    b = a - b;
    a = a - b;
    // after swaping
    printf("After Swaping\n");
    printf("a = %d and b = %d\n", a, b);
    return 0;
}