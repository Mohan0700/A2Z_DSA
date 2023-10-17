#include<bits/stdc++.h>
using namespace std;

int subArray(int arr[],int n,int k){
    map<long long , int> mp;
    long long sum=0;
    int maxlen=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
        long long rem=sum-k;
        if(mp.find(rem)!=mp.end()){
            maxlen=max(maxlen,i-mp[rem]);
        }  
    } 
    return maxlen;
}

int main(){

    int arr[]={2,3,5,1,9};
    int k=10;
    cout<<subArray(arr,5,k);

    return 0;
}