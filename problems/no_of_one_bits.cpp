#include <iostream>
using namespace std;
int main(){
    int one =0;
    int n=12;
    // cin>>n;
    while(n!=0){
        if(n&1){
            one++;
        }
        n>>=1;

    }
    cout<<one;
}