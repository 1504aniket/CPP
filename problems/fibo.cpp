#include<iostream>
using namespace std;
void fib(int n){
    int a=0;
    int b=1;
    int c;
    if(n==1){
        cout<<0;
    }
    if(n==2){
        cout<<1;
    }
    else{
        cout<<a;
        cout<<b;
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
            cout<<b<<" ";

            
        }

    }
   
    

}
int main(){
    int n;
    cin>>n;
    fib(n);
}