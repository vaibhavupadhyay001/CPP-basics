#include<iostream>
using namespace std;
int main(){
    int n,ans=0,a;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i=0;
    while(n!=0){
        int digit=n%10;
        ans=(digit*pow(2,i))+ans;
        n=n/10;
        i++;
    }
    cout<<"The answer is: "<<ans<<endl;

    int sum=0;

    while(ans!=0){
        int d=ans%10;
        sum=sum+d;
        ans=ans/10;
    }
    cout<<"The sum is: "<<sum<<endl;
}

//one more mathod by a=n;