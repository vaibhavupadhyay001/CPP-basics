#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],result[10][10];
    int r1,r2,c1,c2,i,j,k;
    cout<<"Enter rows and column of 1st matrix";
    cin>>r1>>c1;
    cout<<"Enter rows and column of 2nd matrix";
    cin>>r2>>c2;

    if(c1!=r2){
        cout<<"The multiplication is not possible"<<endl;
        return 0;
    }


    cout<<"enter the elements of 1st matrix"<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>a[i][j];

        }
    }
    cout<<"Enter the elements of 2nd matrix"<<endl;
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            result[i][j]=0;
        }
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    } 
    cout << "Resultant matrix: "<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
    