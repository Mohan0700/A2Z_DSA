#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int number;
    cin>>number;
    cout<<isPrime(number);
    return 0;
}
//printDivisors
// Time Complexity -> O(sqrt(n)) Space Complexity -> O(1)
