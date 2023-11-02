#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low + (high-low)/2;
        if(arr[mid]==key){
            return true;
        }
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++;
            high--;
            continue;
        }
        if(arr[mid]>=arr[low]){
            if(key>=arr[low] && key<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(key>arr[mid] && key<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return false;
}

int main(){
    int arr[]={2,5,6,0,0,1,2};
    int key=0;
    cout<<search(arr,7,key);
    return 0;
}