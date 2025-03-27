#include <iostream>
using namespace std;
#include<unordered_map>


int main(){
    // int one=0;
    // int zero=0;
    int arr[5]={1,0,0,1,0};
    // // method1
    // for(int i=0;i<5;i++){
    //     if(arr[i]==1){
    //         one++;
    //     }
    //     else{
    //         zero++;
    //     }
    // }
    // int i=0;
    // while(i<zero){
    //     arr[i]=0;

    // }
    // while(i<one){
    //     arr[i]=1;
    // }
    // for(int i=0;i<5;i++){
    //     cout<<arr[i];
    // }


    int i=0;
    int j=4;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j++;
        }
        else if(arr[i]==1&&arr[j]==0){
            swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}