#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num<=1){
        return num;
    }
    return (num * fact(num-1));
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}

//fact
//Time Complexity -> O(n)  Space Complexity -> O(n) ->consumes stack space till 1 is reached.

