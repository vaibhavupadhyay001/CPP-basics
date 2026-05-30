#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int i=0;i<=30;i++){
         int ans=pow(2,i);
        if(n==ans){
            cout<<ans <<" can be written in power of 2 "<<endl;
            continue;;
        }

    }
    
    return 0;

}