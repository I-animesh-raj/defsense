#include<math.h>
#include<stdio.h>

// return_type func_name(parameter_list){
//     code....
//     return statement....
// }




/*
int ,char,bool,double ,float,void
*/




// double sum( int x,int n)
// {
//     int i=1;
//     double total=1.0;
//     while(i<=n){
//         total=total+(pow(x,i)/i);
//         i++;
//     }
//     return total;
// }

int main(){
    int x=2;
    int n=5;
    double total=1.0;
    for(int i=1;i<=n;i++){
        total=total+(pow(x,i)/i);
    }
    printf("SUM IS :  %.2f",total);
    return 0;
}