#include<iostream>
using namespace std;
int main(){
    int n,bit;
    cout<<"Enter the value of n: ";
    cin>>n;
    int ans=0;
    int i=0;
    int sum=0;
    while(n!=0){
        bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++; 
    } 
    cout<<"The answer is: "<<ans<<endl;
    while(ans!=0){
        int d=ans%10;
        sum=sum+d;
        ans=ans/10;
    } 
    cout<<" the sum is "<<sum<<endl; 
    return 0; 
    
}

//other mathod divide by 2;cout