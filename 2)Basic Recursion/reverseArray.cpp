#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    swap(arr[start],arr[end]);
    reverse(arr,start+1,end-1);
}

int main(){
    int i=0;
    int arr[]={1,2,3,4,5,6};
    reverse(arr,i,5);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}


//reverse
//Time Complexity -> O(n)  Space Complexity -> O(n) ->consumes stack space till 1 is reached.

