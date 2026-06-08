
//swap alternate;

#include<iostream>
using namespace std;
void rev(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i=i+2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;

    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    int arr[5]={1,2,3,4,5};
    rev(arr,5);
    printarr(arr,5);
    return 0;
}

// agar khud se input karana hai to main me ho jayega;
// 2nd mathod se;;
