#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low + (high-low)/2;
        if(arr[mid]>=key){
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={3, 4, 6, 7, 9, 12, 16, 17};
    int key=0;
    cout<<lowerBound(arr,8,key);
    return 0;
}