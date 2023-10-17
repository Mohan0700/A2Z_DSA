#include<bits/stdc++.h>
using namespace std;

int maxOnes(int arr[],int n){
    int maxCount=0;
    int count=0;
    int j=0;
    while(j<n){
        if(arr[j]==1){
            count++;
            maxCount=max(count,maxCount);
        }
        else{
            count=0;
        }
        j++;
    }
    return maxCount;

}
int main(){
    int arr[]={1, 1, 0, 1, 1,1,1, 1};
    int n=8;
    cout<<maxOnes(arr,n);
    return 0;
}