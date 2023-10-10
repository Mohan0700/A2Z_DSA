#include<bits/stdc++.h>
using namespace std;

//not applicable if there are negative elements in the array
int frequency(int arr[],int n,int key){
    int freq[n+1]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    return freq[key];
}

int frequency2(int arr[],int n,int key){
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    return mp[key];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<frequency2(arr,n,key);
    return 0;
}

//frequency
//Time Complexity-> O(n)  Space Complexity->O(m) where m is the max value a integer can hold in this array.
//frequency2
//Time Complexity-> O(n)  Space Complexity->O(n) 
