#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[index],arr[i]);
    }
}

int main(){
    int arr[]={13,46,24,52,20,9};
    int n=6;
    selectionSort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}

//Time Complexity -> O(n^2) for best,average and worst case
//Space Complexity -> O(1)