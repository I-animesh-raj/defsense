#include<stdio.h>
#include<time.h>


int main()
{
    int a=0,b=0;

    while(a<20){
        while(b<10){
            printf("%d ",b);
            b++;
        }
        printf("%d ",a);
        a++;
        b=0;
    }
    int ticks=clock();
    printf("time taken = %d",(float)ticks/CLOCKS_PER_SEC);
    
   
    return 0;
}