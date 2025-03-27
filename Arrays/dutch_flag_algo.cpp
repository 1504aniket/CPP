#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,0,0,2,1,0};
    int low=0;
    int mid=0;
    int high=5;
    while(mid<high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    int i=0;
    while(i<6){
        cout<<arr[i]<<" ";
        i++;
    }

}