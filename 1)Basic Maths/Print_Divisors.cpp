#include<bits/stdc++.h>
using namespace std;

void printDivisors(int num){
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
            if(num/i != i){
                cout<<(num/i)<<" ";
            }
        }
    }
}

int main(){
    int number;
    cin>>number;
    printDivisors(number);
    return 0;
}
//printDivisors
// Time Complexity -> O(sqrt(n)) Space Complexity -> O(1)
