#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int num){
    int countDigits = log10(num) + 1;
    int original_num=num;
    int new_num=0;
    while(num!=0){
        int rem=num%10;
        new_num += pow(rem,countDigits);
        num/=10;
    }
    cout<<new_num<<endl;
    if(new_num==original_num){
        return true;
    }
    return false;
}

int main(){
    int number;
    cin>>number;
    cout<<isArmstrong(number);
    return 0;
}
//isPallindrome 
// Time Complexity -> O(log10(n)) Space Complexity -> O(1)
