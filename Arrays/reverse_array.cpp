#include <iostream>
using namespace std;
void reverse(int arr[]){
    int n=6;
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    reverse(arr);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}