// normal add array is done...

// add unique karna hai.

// solved...
#include<iostream>
using namespace std;
using namespace std;
int main(){
    int sum=0;
    int arr[5]={3,4,5,6,6};
    bool found=false;
    for(int i=0;i<5;i++){

        bool unique=true;
        for(int j=0;j<5;j++){
            if(i!=j&&arr[i]==arr[j]){
                unique=false;
                break;
            }
        }
        if(unique){
            sum=sum+arr[i];
            cout<<arr[i]<<" ";
            found=true;
        }

        if(!found){
            cout<<"No unique elements "<<endl;
            break;
        }

    }

    cout<<endl<<"The sum of unique elements is: "<<sum;

    return 0;

}