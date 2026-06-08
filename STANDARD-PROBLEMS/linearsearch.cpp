#include<iostream>
using namespace std;
 bool search(int arr[],int n,int key){
    bool found=false;
    for(int i=0;i<n;i++){
        if(key==arr[i]){
        return 1;
        found=true;
        break;
    }
}
return 0;    
}

int main(){
    int n,key,i;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements to be searched: ";
    cin>>key;

    bool ans=search(arr,n,key);
if(ans){
    cout<<"Key is present " ;
}
else 
cout<<"key is absent ";

    return 0;
    
}
