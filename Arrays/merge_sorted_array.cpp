#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
       
    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k=arr2[j];
        j++;
        k++;
        ]
    }

}
void printarray(int arr3[],int l){
    int i=0;
    while(i<l){
        cout<<arr3[i]<<" ";
    }
}
int main(){
    int arr1[5]={1,2,5,6,7};
    int arr2[3]={3,4,10};
    int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);
}