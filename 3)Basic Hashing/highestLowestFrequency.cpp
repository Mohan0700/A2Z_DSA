#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[],int n){
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int highest=0 , highestElement=0;
    int lowest=INT_MAX,lowestElement=0;
    for(auto it:mp){
        if(it.second>highest){
            highest=it.second;
            highestElement=it.first;
        }
        if(it.second<lowest){
            lowest=it.second;
            lowestElement=it.first;
        }
    }
    cout<<highestElement<<" "<<lowestElement<<endl;
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
    frequency(arr,n);
    return 0;
}

//frequency
//Time Complexity-> O(n)  Space Complexity->O(m) where m is the max value a integer can hold in this array.
//frequency2
//Time Complexity-> O(n)  Space Complexity->O(n) 
