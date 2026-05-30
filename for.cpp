// FIBPNACCI SERIES

/*

#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    cout<<"enter the value of n:";
    cin>>n;
    a=0;
    b=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        int next=a+b;
        a=b;
        b=next;

    }
    return 0;
}
    */

    // Patterns in cpp;

    #include<iostream>
    using namespace std;
    int main(){
        int i,j;
        //cout<<"Enter the value of n: ";
        for(i=1;i<=5;i++){
            for(int space=1;space<5-i;space++){
                cout<<" ";
            }
            for(j=1;j<=i;j++){
                 cout<<j<<"";
            }
            for(j=1;j<=i-1;j++){
                cout<<i-j<<"";
            }
            cout<<endl;
        }
        return 0;

    }
