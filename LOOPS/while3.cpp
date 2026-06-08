#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    int i=1;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;

        }
        i++;
    }
    cout<<"The sum of Even number is:"<<sum;
    return 0;

}