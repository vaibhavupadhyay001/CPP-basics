//Odd even
/* 
#include<iostream>
using namespace std;
bool iseven(int n){
     return (n%2==0);
}
int main(){
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    if(iseven(x)){
        cout<<"X is an Even number";
    }
    else 
    cout<<"X is an odd number"<<endl;
}
    */

    #include<iostream>
    using namespace std;
    int power(int a,int b){
        int c=pow(a,b);
        return c;
    }
    int main(){
        int x,y;
        cout<<"Enter the value of x: ";
        cin>>x;
        cout<<"Enter the value of y: ";
        cin>>y;
        int ans=power(x,y);
        cout<<"The answer is "<<ans<<endl;
    }
