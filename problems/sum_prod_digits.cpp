#include <iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number:";
cin>>n;
int sum=0;
int prod=1;
int digit;

while(n!=0){
    digit=n%10;
    sum+=digit;
    prod*=digit;
    n=n/10;
    
}
cout<<sum<<endl<<prod;

}
