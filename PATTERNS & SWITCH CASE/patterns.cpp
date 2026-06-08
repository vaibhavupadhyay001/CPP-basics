#include<iostream>
using namespace std;
int main(){
    int i=1;

    while(i<=4){
        int space=1;
        while(space<=4-i){
            cout<<" ";
            space++;
        }
        int j=1;
        while(j<=i){
            cout<<i+j-1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}