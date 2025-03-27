#include <iostream>
using namespace std;


bool linear_search(int arr[],int key){
    int n=sizeof(arr);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5]={4,67,89,34,10};

    bool found=linear_search(arr,34);
    if(found){
        cout<<"found";
    }
    else{
        cout<<"not  found";
    }
}