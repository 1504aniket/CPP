#include <iostream>
using namespace std;
int main(){
    int i=1,n=4;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
        
    }
}