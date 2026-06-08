#include<iostream>
using namespace std;
void common(int arr[],int brr[],int n){
bool found=false;
    for(int i=0;i<n;i++){
        bool iscommon=false;
        for(int j=0;j<n;j++){
        if( (i!=j||i==j) && arr[i]==brr[j]){
            iscommon=true;
            break;
            
        }
        }
        if(iscommon){
            cout<<arr[i]<<" ";
            found=true;
        }
    }
    if(!found){
        cout<<"No common elements: ";
    }
}



int main(){
    int n;
    cout<<"Enter the number of elements of arrays: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" elements of first array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int brr[n];
    cout<<"Enter the "<<n<<" elements of second array: ";
    for(int j=0;j<n;j++){
        cin>>brr[j];
    }
    common(arr,brr,n);
    return 0;
}


