#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=i;j<=5;j++){
            cout<<j-i+1<<" ";
        }
        for(j=2;j<=i;j++){
            cout<<"*"<<" ";
        }
        for(j=2;j<=i;j++){
            cout<<"*"<<" ";
        }
        for(j=i;j<=5;j++)
        {
            cout<<6-j<<" "; 
        }
        cout<<endl;
    }
    return 0;

}