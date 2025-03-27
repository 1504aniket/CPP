#include <iostream>
using namespace std;
#include<unordered_map>


int main() {
    int arr[7] = {1, 66, 66,66,2,3,1};
    // hashing

    // unordered_map<int,int>freq;

    // for(int i=0;i<7;i++){
    //     freq[arr[i]]++;
    // }

    // for(auto it:freq){
    //     if(it.second>1){
    //         cout<<"duplicate:"<<it.first<<endl;
    //     }
    // }



    // two pointer 

    // for(int i=0;i<7;i++){
    //     for(int j=i+1;j<7;j++){
    //         if(arr[i]==arr[j]){
    //             cout<<arr[i]<<"duplicate"<<endl;
    //         }
       
    //     }
     
    // } 


    // sorting $ searching
    sort(arr,arr+7);

    for(int i=1;i<7;i++){
        if(arr[i-1]==arr[i]){
            cout<<arr[i]<<"duplicate"<<endl;
        }
    }


   
}
