//patterns using WHILE LOOP:

#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=5){
        int space=1;
        while(space<=5-i){
            cout<<" ";
            space++;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;

    }
    return 0;
}