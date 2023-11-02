#include<bits/stdc++.h>
using namespace std;

int minimum(int arr[],int n){
    int low=0;
    int high=n-1;
    int mini=INT_MAX;
    int miniIndex=-1;
    while(low<=high){
        int mid=low + (high-low)/2;
        if(arr[mid]>=arr[low]){
            if(arr[low]<mini){
                mini=arr[low];
                miniIndex=low;
            }
            low=mid+1;
        }
        else{
            if(arr[mid]<mini){
                mini=arr[mid];
                miniIndex=mid;
            }
            high = mid-1;
        }
    }    
    return miniIndex; 
}

int main(){
    int arr[]={2,5,6,-1,0,1,2};
    cout<<minimum(arr,7);
    return 0;
}