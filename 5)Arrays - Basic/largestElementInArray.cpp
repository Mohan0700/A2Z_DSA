#include<bits/stdc++.h>
using namespace std;

int largest(int arr[],int n){
    int large = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    return large;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,7,8,8};
    int n=10;
    cout<<largest(arr,n)<<endl;
    return 0;
}