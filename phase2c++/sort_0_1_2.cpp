#include<iostream>
using namespace std;

int main(){
    int arr[6]={0,0,1,2,2,1};
     int left =0;
     int middle =0;
     int right=5;
     while(middle<right){

        if(arr[middle]==0){

            swap(arr[left],arr[middle]);
                left++;
                middle++;
            }

            else if(arr[middle]==1){
                middle++;
            }

            else {
            swap(arr[middle],arr[right]);
            right--;
        }
        }

        for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
     }
     return 0;
     }
    


