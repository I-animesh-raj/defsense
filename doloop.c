#include <stdio.h>
int main()
{

    int num,i=0;     //num =10
    printf("enter a number\n ");
    scanf("%d", &num);

    // //-------DO WHILE LOOP------
    // do
    // {
    //     printf("%d\n", i+ 1);
    //     i = i+ 1;

    // } while (i<num); 

    //----WHILE LOOP-------

    // while (i<num)
    // {
    //      printf("--%d       ", i);
    //      i = i+ 1;
    //      printf("@%d\n",i);

    // }

    //-----FOR LOOP----------

    for ( int i=0 ; i < num; i++)     //(intialize ; condition; increament)
    {
         printf("--%d_________", i);
         printf("@%d\n",i);
    }
    
    return 0;
}
