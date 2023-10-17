#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int n){
    int secondLarge=-1;
    int large = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>large){
            secondLarge=large;
            large=arr[i];
        }
        else if(arr[i]>secondLarge && arr[i]!=large){
            secondLarge=arr[i];
        }
    }
    return secondLarge;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,7,8,8};
    int n=10;
    cout<<secondLargest(arr,n)<<endl;
    return 0;
}