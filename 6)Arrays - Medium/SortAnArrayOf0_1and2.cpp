#include <bits/stdc++.h>
using namespace std;

void sort_(int arr[], int n){
    int low=0;
    int mid=0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int arr[]={2,0,2,1,1,0};
    sort_(arr,6);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}