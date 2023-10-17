#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[],int n){
    int count=1;
    int i=0,j=1;
    while(j<n){
        if(arr[j]>arr[i]){
            swap(arr[j],arr[i+1]);
            i++;
            count++;
        }
        j++;
    }
    return count;
}
int main(){
    int arr[]={1,1,1,2,2,3,3,3,3,4,4};
    int n=10;
    cout<<removeDuplicates(arr,n)<<endl;
    return 0;
}