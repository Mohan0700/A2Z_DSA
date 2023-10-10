#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int num){
    int reverse=0;
    while(num>0){
        int rem=num%10;
        reverse = reverse*10 + rem;
        num/=10;
    }
    return reverse;
}

int main(){
    int number;
    cin>>number;
    cout<<reverseNumber(number);
    return 0;
}
//reverseNumber 
// Time Complexity -> O(log10(n)) Space Complexity -> O(1)
