#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,0,1,0,4,0};
    int n=7;
    int key=7;
    cout<<search(arr,n,key);
    return 0;
}