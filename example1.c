// WRITE A PROGRAM TO PRINT NAME,AGE ,SALARY OF A USER BY TAKING INPUT FROM THE USER.
//  DECLARE THREE VARIABLES (CHAR[10] ='sahil'),INT AGE AND FLOAT SALARY.

#include <stdio.h>


int main()
{
        char name[20];
        float salary;
        int num;
        printf("enter your name : ");
        scanf("%s", &name);

        printf("enter your age: ");
        scanf("%d", &num);

        printf("enter your salary: ");
        scanf("%f", &salary);



        printf("NAME: %s\nAGE: %d \nSALARY: %10.2f",name,num,salary);
    return 0;
}
