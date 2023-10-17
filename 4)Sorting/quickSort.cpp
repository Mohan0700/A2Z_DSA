#include<bits/stdc++.h>
using namespace std;

int quick(int arr[] ,int low , int high){
    int i=low;
    int j=high;
    int pivot=arr[low];
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(int arr[],int low, int high){
    if(low>=high) return;
    int pivotIndex=quick(arr,low,high);
    quickSort(arr,low,pivotIndex-1);
    quickSort(arr,pivotIndex+1,high);
}

int main(){
    int arr[]={13,46,24,52,20,9};
    quickSort(arr,0,5);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}