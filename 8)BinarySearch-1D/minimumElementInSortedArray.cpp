#include<bits/stdc++.h>
using namespace std;

int minimum(int arr[],int n){
    int low=0;
    int high=n-1;
    int mini=INT_MAX;
    while(low<=high){
        int mid=low + (high-low)/2;
        if(arr[mid]>=arr[low]){
            mini=min(mini,arr[low]);
            low=mid+1;
        }
        else{
            mini=min(mini,arr[mid]);
            high = mid-1;
        }
    }    
    return mini;
}

int main(){
    int arr[]={2,5,6,-1,0,1,2};
    cout<<minimum(arr,7);
    return 0;
}