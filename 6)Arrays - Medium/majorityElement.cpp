#include <bits/stdc++.h>
using namespace std;

int majorityElement(int nums[],int n) {
    int count=0;
    int ele=nums[0];
    for(int i=0;i<n;i++){
        if(count<=0){
            ele=nums[i];
            count=0;
        }
        if(nums[i]==ele) count++;
        else count--;
    }
    return ele;
}

int main(){
    int arr[]={2,2,1,1,1,2,2};
    cout<<majorityElement(arr,7);
    return 0;
}