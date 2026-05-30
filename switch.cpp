 #include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter the value of n: ";
    cin>>n;
    int note100=0,note50=0,note20=0,note10=0,
    coin1=0,coin2=0,coin3=0;
    int choice=1;

    /*
    choice me 1 diye hain break nahi lagaaye hain isiliye 
     saari cases run hogi */

    

    switch(choice){
        case 1:cout<<"Total number of 100s notes= "<<n/100<<endl;;
        n=n%100;
        case 2:cout<<"total number of 50 notes= "<<n/50<<endl;
        n=n%50;
        case 3:cout<<"total number of 20s notes= "<<n/20<<endl;
        n=n%20;
        case 4:cout<<"total number of 10s note= "<<n/10<<endl;
        n=n%10;
        case 5:cout<<"total coins of  5s= "<<n/5<<endl;
        n=n%5;
        case 6:cout<<"total coins of  2s= "<<n/2<<endl;
        n=n%2;
        case 7:cout<<"total coins of  1s= "<<n/1<<endl;
        n=n%1;
    }
    return 0;

} 
    


    // infinite loop se bahar aana hai

    /*

    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the value of n: ";
        cin>>n;
        while(n!=0){
        switch(n){
            case 1: cout<<"a"<<endl;
            case 2: cout<<"b"<<endl;
            case 3: cout<<"c"<<endl;
            case 4: cout<<"d"<<endl;
            case 5: cout<<"e"<<endl;
            
        }
        n--;
        break;

    }
        return 0;

    } 
        */