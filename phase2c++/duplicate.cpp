//This is 2 pointer mathod

/*
#include<iostream>
using namespace std;
void duplicate(int arr[],int n){
    bool found=false;
    for(int i=0;i<n;i++){
        bool isduplicate=false;
        for(int j=0;j<n;j++){
            if(i!=j&&arr[i]==arr[j]){
                isduplicate=true;
                break;

            }
            
        }
        if(isduplicate){
            cout<<arr[i]<<" ";
            found=true;
        }
    }
    if(!found){
        cout<<"No duplicate elelmenst ";
    }
    cout<<endl;

}

int main(){
    int n,i,j;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    duplicate(arr,n);
  return 0;
        
    }
  */



  // Xor mathod;

  #include<iostream>
  using namespace std;
void duplicate(int arr[],int n){
    int i,ans=0;
    for( i=0;i<n;i++){
        ans=ans^arr[i];

    }
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    cout<<ans<<" ";
    
  }

  int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    duplicate(arr,n);
    return 0;
    }
