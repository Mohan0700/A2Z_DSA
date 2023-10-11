#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    if(n<=0) return;

    for(int j=0;j<n;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }

    bubbleSort(arr,n-1);

}

int main(){
    int arr[]={13,46,24,52,20,9};
    int n=6;
    bubbleSort(arr,n-1);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}