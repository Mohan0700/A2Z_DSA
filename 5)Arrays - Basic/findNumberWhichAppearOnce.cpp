#include<bits/stdc++.h>
using namespace std;

int findNum(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans ^= arr[i];
    }
    return ans;
}
int main(){
    int arr[]={4,1,2,1,2};
    int n=5;
    cout<<findNum(arr,n);
    return 0;
}