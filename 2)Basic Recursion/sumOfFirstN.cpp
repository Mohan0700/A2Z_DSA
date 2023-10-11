#include<bits/stdc++.h>
using namespace std;

int sum(int num){
    if(num<=1){
        return num;
    }
    return (num + sum(num-1));
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}


//sum
//Time Complexity -> O(n)  Space Complexity -> O(n) ->consumes stack space till 1 is reached.

