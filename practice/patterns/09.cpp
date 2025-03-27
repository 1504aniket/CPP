#include <iostream>
using namespace std;
int main(){
    int i=1,n=4,count=1;
    while(i<=n){
        int j=1;
        count=i;
        while(j<=i){
            cout<<count<<" p";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}