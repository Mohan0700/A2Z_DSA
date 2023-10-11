#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    int left=start;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=end){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=start;i<=end;i++){
        arr[i]=temp[i-start];
    }
}

void mergeSort(int arr[],int start,int end){
    if(start>=end) return;
    int mid=start + (end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main(){
    int arr[]={13,46,24,52,20,9};
    int n=6;
    mergeSort(arr,0,n-1);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}

//Time Complexity -> O(nlogn) 
//Space Complexity -> O(n)