#include<iostream>
using namespace std;

int main(){
    int i,j,space;
    for(i=1;i<=5;i++)
    {
        for(space=1;space<=5-i;space++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=2;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=5;i++){
        for(space=1;space<=i-1;space++){
            cout<<" ";
        }
        for(j=i;j<=5;j++){
            cout<<"*";
        }
        for(j=i;j<=5;j++){
            cout<<"*";
        }
        cout<<endl;
    
    }
    return 0;
}
    
    




    



