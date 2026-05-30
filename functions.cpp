/* #include<iostream>
using namespace std;
int fact(int n ){
    int f=1;
    for(int i=1;i<=n;i++){
         f=f*i;
    }
    return f;
}

int cpr(int n,int r){
    int a=fact(n);
    int b= fact(r)*fact(n-r);
    int c=a/b;
    return c;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int r;
    cout<<"enter the value of r: ";
    cin>>r;
    int ans=cpr(n,r);
    if(r>n||n==0||r==0){
        cout<<"r should beless than (r<=n) n ";
    }
    else
    cout<<"The answer is "<<ans<<endl;
} 
    */


    //count BITSETS 

    /*

    #include<iostream>
    using namespace std;
    int bitscount(int a,int b){
         int count=0;
    while((a!=0)||(b!=0)){
            count=count+(a&1);
            count=count+(b&1);
        
        a=a>>1;
        b=b>>1;
    } 
    return count;
}



int main(){
    int x,y;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    int ans=bitscount(x,y);
    cout<<"the bitset is: "<<ans<<endl;

}
    */

    //AP series (3*n+7)

   /*  #include<iostream>
    using namespace std;
    int ap(int n){
        n=3*n+7;
        return n;

    }
    int main(){
        int a;
        cout<<"Enter the value of a: ";
        cin>>a;
        a=ap(a);
        cout<<"The nth term is: "<<a<<endl;

    }
        */

        #include<iostream>
        using namespace std;
        void fib(int n){
            int i,a=0;
            int b=1,next;
            for(i=1;i<=n;i++){
                cout<<a<<" ";
                next = a+b;
                a=b;
                b=next;

            }
            cout<<endl;

        }

        int main(){
            int a;
            cout<<"Enter the value of a: ";
            cin>>a;
            fib(a);
            return 0;
        }