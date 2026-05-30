#include<iostream>
using namespace std;
void isunique(int arr[],int n){
    bool found=false;
    for(int i=0;i<n;i++){
        bool unique=true;
        for(int j=0;j<n;j++){
            if(i!=j&&arr[i]==arr[j]){
              unique=false;
              break;
        } 
    }
    if(unique){
        cout<<arr[i]<<" ";
        found=true;
    }}
    if(!found){
        cout<<"No unique elements ";
}
}
int main(){
    int n,i;
    cout<<"enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    isunique(arr,n);  

    return 0;
} 

