#include <iostream>
using namespace std;
int main(){
    int a ='A';
    char ch=97;
    cout<<a<<endl;
    // here we storeed a chracter in int data type ,so char will typecast into int,and store the ascii value related to it  
    cout<<ch<<endl; 
    // char typecasted into int 


    char large=123456;
    // here we store very large number in chracter so it took only last 1 byte of number and converted into chracter 
    cout<<large;
    
}