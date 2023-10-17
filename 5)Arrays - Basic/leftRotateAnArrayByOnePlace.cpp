#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n){
    int num=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=num;
}
int main(){
    int arr[]={1,1,1,2,2,3,3,3,3,4,4};
    int n=11;
    leftRotate(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}