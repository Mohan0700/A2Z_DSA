#include<bits/stdc++.h>
using namespace std;

int subArray(int arr[],int n,int k){
    int i=0;
    int j=0;
    int maxLen=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        
        while(sum>k){
            sum -=arr[j];
            j++;
        }
        if(sum==k){
            maxLen=max(maxLen,i-j+1);
        }

    }
    return maxLen;
}

int main(){

    int arr[]={2,3,5,1,9};
    int k=10;
    cout<<subArray(arr,5,k);

    return 0;
}