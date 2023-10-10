#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(int num){
    int original_num=num;
    int reverse=0;
    while(num>0){
        int rem=num%10;
        reverse = reverse*10 + rem;
        num/=10;
    }
    return (reverse==original_num);
}

int main(){
    int number;
    cin>>number;
    cout<<isPallindrome(number);
    return 0;
}
//isPallindrome 
// Time Complexity -> O(log10(n)) Space Complexity -> O(1)
