#include <iostream>
using namespace std;
int main(){
    int i=1,n=4;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}