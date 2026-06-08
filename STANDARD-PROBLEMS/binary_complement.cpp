#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    int bits=0;
    int m;
    m=n;
    while(m>0){
        bits++;
        m=m>>1;
    }
    int mask=(1<<bits)-1;
    int ans=(~n)&mask;
    cout<<ans;

    return 0;

    }
    
