#include<iostream>
#include<ctime>
using namespace std;


int main()
{
    int a=0,b=0;

    while(a<200){
        while(b<10){
            cout<<b<<" ";
            b++;
        }
        cout<<a<<" ";
        a++;
        b=0;
    }
    int ticks=clock();
    cout<<"time taken ="<<(float)ticks/CLOCKS_PER_SEC;
    
   
    return 0;
}