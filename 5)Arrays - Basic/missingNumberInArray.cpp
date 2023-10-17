#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[],int n){
    int missing_num=0;
    for(int i=0;i<n;i++){
        missing_num=missing_num^(i+1)^arr[i];
    }
    missing_num=missing_num^(n+1);
    return missing_num;
}
int main(){
    int arr[]={1,2,4,5};
    int n=4;
    cout<<missingNumber(arr,n);
    return 0;
}