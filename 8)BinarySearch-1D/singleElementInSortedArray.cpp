#include<bits/stdc++.h>
using namespace std;

int single(int arr[],int n){
    //edge cases
    if(n==1) return arr[0];
    if(arr[0]!=arr[1]) return arr[0];
    if(arr[n-1]!=arr[n-2]) return arr[n-1];
    
    int low=1;
    int high=n-2;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]){
            return arr[mid];
        }
        else if((mid % 2)!=0){
            if(arr[mid-1]==arr[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        else{
            if(arr[mid]==arr[mid+1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    } 
    return -1;
}

int main(){
    int arr[]={1,1,2,2,3,3,4,5,5,6,6};
    cout<<single(arr,11);
    return 0;
}