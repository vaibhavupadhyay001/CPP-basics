#include<iostream>
using namespace std;
int main(){
    int arr[6]={0,1,1,0,1,0};

    int left=0;
    int right=5;

    while(left<right ){
        while(arr[left]==0 && left<right){
            left++;
        }
        

        
        while(arr[right]==1 && left<right){
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
    
            right--;
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
