#include<bits/stdc++.h>
using namespace std;

int HCF1(int num1 ,int num2){
    int n = min(num1,num2);
    int ans=1;
    for(int i=1;i<=n;i++){
        if(num1%i==0 && num2%i==0){
            ans=i;
        }
    }
    return ans;
}

int HCF2(int num1,int num2){
    while(num1!=0 && num2!=0){
        if(num1>num2){
            num1 = num1 % num2;
        }
        else{
            num2 = num2 % num1;
        }
    }
    if(num1==0){
        return num2;
    }
    return num1;
}

int LCM(int num1 , int num2){
    int ans= num1 * num2 / HCF2(num1,num2); 
    return ans;
}

int main(){
    int number1,number2;
    cin>>number1>>number2;
    cout<<HCF2(number1,number2)<<endl;
    cout<<LCM(number1,number2);
    return 0;
}

// HCF1 
//Time Complexity -> O(min(num1,num2))  Space Complexity -> O(1)
//HCF2
//Time Complexity -> O(logɸmin(a,b))  Space Complexity -> O(1)
//LCM
//Time Complexity -> Dependds how you calculate HCF   Space Complexity -> O(1)