#include<iostream>
using namespace std;

int main(){
    int i,j,n,k;
    cout<<"enter no of rows :";
    cin>>n;

    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n||j==1||j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
        
    }

    // for(i=n;i>=1;i--){
    //     for(j=1;j<=i-1;j++){
    //         cout<<" ";
    //     }
    //     for(k=1;k<+n;k++){
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }
    return 0;
}