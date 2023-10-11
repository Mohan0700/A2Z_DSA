#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=n-1;i>0;i--){
        int count=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
        if(count==0){
            break;
        }
    }
}

int main(){
    int arr[]={13,46,24,52,20,9};
    int n=6;
    bubbleSort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}

//Time Complexity -> O(n^2) for average and worst case   O(n)->Best Case(when array is already sorted)
//Space Complexity -> O(1)