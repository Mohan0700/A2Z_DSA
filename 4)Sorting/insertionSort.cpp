#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
}

int main(){
    int arr[]={13,46,24,52,20,9};
    int n=6;
    insertionSort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}

//Time Complexity -> O(n^2) for average and worst case   O(n)->Best Case(when array is already sorted)
//Space Complexity -> O(1)