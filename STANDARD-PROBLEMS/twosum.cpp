#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int i, j ,s=7;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]+arr[j]==s){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}