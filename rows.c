#include<stdio.h>
int main()
{
    int n;
    printf(" enter number of  rows");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++);
    {
        for(j=1;j<=n;j++);
        {
            if(i==1 ||i==n||j==1||j==n)
            {
                printf("*");
                
            }
            else{
                printf(" ");
            }
            

        }
        printf("\n");
    }
    return 0;
}