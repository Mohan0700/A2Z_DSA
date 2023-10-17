#include<bits/stdc++.h>
using namespace std;

void moveZeros(int arr[],int n){
    int i=-1;
    for(int j=0;j<n;j++){
        if(arr[j]==0){
            i=j;
            break;
        }
    }
    for(int j=i+1;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
}
int main(){
    int arr[]={1,2,0,1,0,4,0};
    int n=7;
    moveZeros(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}