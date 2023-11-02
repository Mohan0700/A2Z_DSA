#include<bits/stdc++.h>
using namespace std;

int firstOcurrence(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans = -1;
    while(low<=high){
        int mid=low + (high-low)/2;
        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int lastOcurrence(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans = -1;
    while(low<=high){
        int mid=low + (high-low)/2;
        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={5,7,7,8,8,10};
    int key=8;
    cout<<lastOcurrence(arr,6,key)-firstOcurrence(arr,6,key)+1;
    return 0;
}