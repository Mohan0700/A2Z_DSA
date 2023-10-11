#include<bits/stdc++.h>
using namespace std;

int fib(int num){
    if(num<2){
        return num;
    }
    return (fib(num-1)+fib(num-2));
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}

//fib
//Time Complexity -> O(2^n)  Space Complexity -> O(n) ->consumes stack space till 1 is reached.

