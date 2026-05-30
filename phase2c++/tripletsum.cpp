#include<iostream>
using namespace std;
int main(){
    int arr[6]={3,2,1,9,5,8};

    int i,j,k;
    int s=14;

    for(i=0;i<6;i++){

        for(j=i+1;j<6;j++){

            for(k=j+1;k<6;k++){

        if(arr[i]+arr[j]+arr[k]==s){

            cout<<arr[i]<<" " <<arr[j]<<" "<<arr[k]<<endl;
        }
    }
}

}
}
