#include <bits/stdc++.h>
using namespace std;

void twoSum(int nums[],int n, int target) {
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int rem = target - nums[i];
        if(mp.find(rem)!=mp.end()){
            cout<<(i)<<" ";
            cout<<(mp[rem]);
            return;
        }
        mp[nums[i]]=i;
    }
}

int main(){
    int arr[]={2,7,11,15,-2,4,5};
    twoSum(arr,7,5);
    return 0;
}