#include <iostream>
using namespace std;
int main(){
    int a=20;
    int b=35;
    int c=40;

    if(b>a && c>b){
        // all condition must be true in and case 
        cout<<"and operator"<<endl;
    }
    if(b<a || c>b){
        // any one condn must be true  
        cout<<"or operator"<<endl;
    }
}