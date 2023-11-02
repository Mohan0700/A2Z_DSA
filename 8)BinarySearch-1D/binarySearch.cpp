#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low + (high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={3, 4, 6, 7, 9, 12, 16, 17};
    int key=12;
    cout<<search(arr,8,key);
    return 0;
}