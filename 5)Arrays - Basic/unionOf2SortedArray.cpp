#include<bits/stdc++.h>
using namespace std;

void uni(int arr[],int brr[],int n,int m){
    vector<int> temp;
    int left=0;
    int right=0;
    if(arr[left]<=brr[right]){
        temp.push_back(arr[left]);
        left++;
    }
    else{
        temp.push_back(brr[right]);
        right++;
    }
    while(left<n && right<m){
        if(arr[left]<=brr[right]){
            if(arr[left]!=temp[temp.size()-1]){
                temp.push_back(arr[left]);
            }
            left++;
        }
        else{
            if(brr[right]!=temp[temp.size()-1]){
                temp.push_back(brr[right]);
            }
            right++;
        }
    }
    while(left<n){
        if(arr[left]!=temp[temp.size()-1]){
            temp.push_back(arr[left]);
        }
        left++;
    }
    while(right<m){
        if(brr[right]!=temp[temp.size()-1]){
            temp.push_back(brr[right]);
        }
        right++;
    }
    for(int i:temp){
        cout<<i<<" ";
    }
}

int main(){

    int arr[]={1,2,3,4,5};
    int brr[]={2,3,4,5,6};
    uni(arr,brr,5,5);

    return 0;
}