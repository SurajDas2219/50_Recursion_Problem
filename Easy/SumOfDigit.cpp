// Sum of Digits:Recursive function to find the sum of digits of an integer.
#include <bits/stdc++.h>
using namespace std;

long long int iterativeSol(long long int num){
    long long int sumOfDigits = 0;

    while(num!=0){
        long long int digit = num % 10;
        // cout<<digit<<endl;
        sumOfDigits+=digit;

        num = num / 10;
    }
    return sumOfDigits;
}

long long int recursiveSol(long long int num){
    if(num == 0){
        return 0;
    }
    return (num % 10) + recursiveSol(num / 10);
}

int main(){

    long long int  num = 98;
    // cout<<"Sum of digit of given number is:"<<iterativeSol(num)<<endl;
    cout<<"Sum of digit of given number is:"<<recursiveSol(num)<<endl;

    return 0;
}