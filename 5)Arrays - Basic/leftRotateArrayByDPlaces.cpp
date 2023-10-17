#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n,int d){
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int arr[]={1,1,1,2,2,3,3,3,3,4,4};
    int n=11;
    int d=5;
    leftRotate(arr,n,d);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}