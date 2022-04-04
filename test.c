#include <stdio.h>
int main()
{
    int a,b;  //variable defined here.

    printf("enter 1st number: ");  // printing
    scanf ("%d",&a);   //taking input from user
    printf("enter 2nd number: ");  //printing
    scanf ("%d",&b);   //Taking input from user
    
    printf("the sum is %d and %d = %d\n" ,a,b, (a+b )); 
    printf("the sum is : %d\n" ,a+b);
    return 0;

}