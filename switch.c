#include <stdio.h>

/*void sahil(float a)
{
    printf("My name is Sahil\n and\n my salary is %f.", a);
}*/

int main()
{
    float salary;
    int a;
    do
    {
        printf("\nEnter \t(1) to print salary AND\t(2) to print 12 monts salary \t (3) to exit\n");
        printf("Enter choice: ");
        scanf("%d", &a);

       
        // sahil();
        switch (a)
        {
        case 1:
             printf("Enter salary: ");
        scanf("%f", &salary);
            printf("my salary: %f", salary);
            break;

            
        case 2:
             printf("Enter salary: ");
        scanf("%f", &salary);
            printf("My salary in 12 months : %f", (salary * 12));
            break;
            

        case 3:
            printf("ending program");
            break;

        default:
            printf("someting went wrong..!");
        }
    } while (a != 3);

    return 0;
}
