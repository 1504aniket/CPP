#include <iostream>
using namespace std;
void swapping(int arr[],int n){
    int i=0;
    int j=1;
    while((j+1)<=n){
        swap(arr[i],arr[j]);
        i+=2;
        j+=2;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={1,2,3,4,5,6};
    swapping(arr,5);
    swapping(brr,6);
}