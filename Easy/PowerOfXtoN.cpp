/*
Problem Statement: Power of a Number
Given two integers, x and n, compute (x raised to the power n) using recursion.

Input:
An integer x (base).
A non-negative integer n (exponent).

Output:
An integer representing x ^ n

For Example:
Input : x = 2, n = 5
Output : 32
Explantion:2^5 = 2×2×2×2×2 = 32.

*/

#include <bits/stdc++.h>
using namespace std;

// Navie Solution : O(N)

// int findPowerOfXtoN(int x ,int n){

//     // Base Case
//     if(n == 0){
//         return 1;
//     }

//     // Main Case
//     int result = x * findPowerOfXtoN(x,n-1);

//     // return
//     return result;
// }

// Optimized Solution :-Recursive Solution O(Log N);

// double findPowerOfXtoN(int x, int n){
//     // Base Case
//     if(n == 0){
//         return 1;
//     }
//     double res = findPowerOfXtoN(x,n/2);
//     if(n % 2 == 0){
//         return res * res ;
//     }
//     else{
//         return x * res * res;
//     }
// }

// Optimised Iterative Solution :O(Log N)

int findPowerOfXtoN(int x,int n){
    int ans = 1;
    while(n>0){
        if((n%2)== 0){
            n = n/2;
            x=x*x;
        }
        else{
            n = n - 1;
            ans = ans * x;
        }
    }
    return ans;
}

 

int main(){

    int x = 2;
    int n = 9;

    int result=1;
    // Iterative Solution :O(N)
    // for(int i = 0 ; i < n ;i++){
    //     result * = x;
    // }
    // cout<<"Answer is : "<<result<<endl;

    cout<<"Answer is : "<<findPowerOfXtoN(x,n)<<endl;

    return 0;
}
