#include <iostream>
using namespace std;
int main(){
    int n,key,i;
    cout<<"Enter the number of elements:";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<< " elements:";
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }

    cout<<"Enetr to be searched: ";
    cin>>key;

    bool found=false;
    for(i=1;i<=n;i++){
        if(arr[i]==key){
        cout<<"Elements found at position:"<<i <<endl;
        found=true;
        break;
    }
    }

    if(!found){
        cout<<"Elements not found in Array";
    }
    return 0;

}