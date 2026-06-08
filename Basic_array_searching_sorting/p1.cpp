// count 1 in Binary;
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int count=0;
    while(n!=0){
        int z=n&1;
        if(z){
            count++;
        }
        n=n>>1;
        
    }
    cout<<"total 1's in given number is "<<count<<endl;
    
    return 0;
} 
    */

    
   
    


    //complement of base 10;

    
    
    #include<iostream>
    #include<math.h>
    using namespace std;
    int main(){
        int n;
        cout<<"Enter the value of n ";
        cin>>n;
        int mask=0;
        int m=n;
        while(m!=0){
            mask=(mask<<1)|1;
            m=m>>1;
        }
        int ans=(~n)&mask;
        cout<<"The complement is "<<ans<<endl;
        return 0;

    }
        
        


