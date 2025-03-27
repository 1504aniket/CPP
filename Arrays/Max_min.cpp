#include <iostream>
using namespace std;
int main(){
    int arr[10]={20,4,1,2,56,74,89};
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<10;i++){
        // if(arr[i]>max){
        //     max=arr[i];

        // }
        // if(arr[i]<min){
        //     min=arr[i];
        // }
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    cout<<maxi<<endl<<mini;
}