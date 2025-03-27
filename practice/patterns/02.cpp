#include <iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;

    while(i<=n){
        int k=1;
        while(k<=n){
            cout<<i;
            k++;
        }
        i++;
        cout<<endl;
    }
}