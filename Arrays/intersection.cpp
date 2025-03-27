#include<iostream>
using namespace std;
#include<vector>
int main(){
    int arr[6]={1,2,3,4,5,6};
    int brr[4]={3,4,5};


    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(brr)/sizeof(brr[0]);
    int i=0,j=0;
    vector<int>ans;

    while(i<n&&j<m){
        if(arr[i]==brr[j]){
         ans.push_back(arr[i]);
         i++;
         j++;
        }
        else if(arr[i]<brr[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(auto it:ans){
        cout<<it;
    
    }
}
