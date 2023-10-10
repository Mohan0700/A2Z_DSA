#include<bits/stdc++.h>
using namespace std;

int countDigits1(int num){
    int count=0;
    while(num>0){
        count++;
        num/=10;
    }
    return count;
}

int countDigits2(int num){
    int ans = log10(num) + 1;
    return ans;
}

int main(){
    int number;
    cin>>number;
    cout<<countDigits2(number);
    return 0;
}
//countDigits1 
// Time Complexity -> O(log10(n)) Space Complexity -> O(1)
//countDigits2
// Time Complexity -> O(1) Space Complexity -> O(1)