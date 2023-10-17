#include<bits/stdc++.h>
using namespace std;

void intersection(int arr[],int brr[],int n,int m){
    vector<int> temp;
    int left=0;
    int right=0;
    while(left<n && right<m){
        if(arr[left]==brr[right]){
            temp.push_back(arr[left]);
            left++;
            right++;
        }
        else if(arr[left]<brr[right]){
            left++;
        }
        else{
            right++;
        }
    }
    for(int i:temp){
        cout<<i<<" ";
    }
}

int main(){

    int arr[]={1,2,3,4,4,5};
    int brr[]={2,3,4,4,5,5,6};
    intersection(arr,brr,6,7);

    return 0;
}