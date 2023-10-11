#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int i,int n){
    if(i>=n) return;
    for(int j=i;j>0;j--){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
        else break;
    }
    insertionSort(arr,i+1,n); 
}
int main(){
    int arr[]={13,46,24,52,20,9};
    int n=6;
    int i=0;
    insertionSort(arr,i,n);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}

//Time Complexity -> O(n^2) for average and worst case   O(n)->Best Case(when array is already sorted)
//Space Complexity -> O(1)