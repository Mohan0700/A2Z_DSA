#include<bits/stdc++.h>
using namespace std;

void print(int num){
    if(num<1){
        return;
    }
    cout<<num<<" ";
    print(num-1);
}

int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}

//print
//Time Complexity -> O(n)  Space Complexity -> O(n) ->consumes stack space till 1 is reached.

