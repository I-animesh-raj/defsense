#include <stdio.h>

int main()
{
    int age;
    printf(" enter your age\n");

    scanf ("%d", &age);
    printf("you have entered %d as your age\n", age);
    if (age>=21){
        printf("you can fuck");
    }
    else if(age<21)
    {
        printf("You are under age");
    }
    else{
        printf("you can't fuck");

    }

    return 0;
}