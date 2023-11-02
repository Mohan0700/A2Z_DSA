#include<bits/stdc++.h>
using namespace std;

int floor(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans = -1;
    while(low<=high){
        int mid=low + (high-low)/2;
        if(arr[mid]<=key){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return arr[ans];
}

int ceil(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans = -1;
    while(low<=high){
        int mid=low + (high-low)/2;
        if(arr[mid]>=key){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return arr[ans];
}

int main(){
    int arr[]={3, 4, 4, 7, 8, 10};
    int key=8;
    cout<<floor(arr,6,key)<<" ";
    cout<<ceil(arr,6,key);
    return 0;
}