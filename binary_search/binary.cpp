#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int start=0;
    int end=9;
    int mid=(start+end)/2;
    int key=6;
    while(start<=end){
        if(arr[mid]==key){
            cout<<mid;
            break;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    cout<<2;
}