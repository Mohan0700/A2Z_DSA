#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]={1,2,3,9,5,6,7,7,8,8};
    int n=10;
    cout<<isSorted(arr,n)<<endl;
    return 0;
}