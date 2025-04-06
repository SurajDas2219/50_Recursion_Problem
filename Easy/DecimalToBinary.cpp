/*
Write a program that takes a decimal (base-10) number as input and converts it into its binary (base-2) representation. The program should output the binary equivalent of the given decimal number.

Constraints:
The input will be a non-negative integer.
0<= N <= 10^9
The output should not have leading zeros (except when the number is 0).
*/

#include <bits/stdc++.h>
using namespace std;

// Brute force
/*Approach: Use repeated division by 2 to extract the binary digits from least significant to most significant.

Steps:
Initialize an empty string or array to store binary digits.
While the decimal number N is greater than 0:
Divide N by 2.
Store the remainder (0 or 1) — this is a binary digit.
Update N as N / 2.
Reverse the stored binary digits to get the correct binary representation.

If the number is 0, output 0.
*/

string binaryToDecimal(int num){
    if(num == 0) return "0";

    string binaryNum = "";
    while(num > 0){
        int remainder = num % 2;
        cout<<remainder<<endl;
        binaryNum += to_string(remainder);
        cout<<binaryNum<<endl;
        num = num/2;
    }
    reverse(binaryNum.begin(),binaryNum.end());
    return binaryNum;
}

// Better Approach:T.C = O(log N),S.C = O(log N)
/*
Step:
1.Instead Of doing modulus operations we can do bitwise opration as they are quite faster than the % operator
2.Initalized an empty String 
3.Iterate while n > 0
4.check n&1 ==1 then append "1" to the string or else append "0" to  the string
5.We can do it using ternaryOperator (n&1)?"1":"0";
6.Then instead of dividing n /2 we can do like n = n>>1
*/

string betterApproach(int num){
    if(num == 0) return "0";

    string binaryNum = "";
    while(num > 0){
        binaryNum += (num & 1) ? "1":"0";
        num =num >> 1;
    }
    reverse(binaryNum.begin(),binaryNum.end());
    return binaryNum;
}

int main(){

    int decimalNumber = 45;
    string binary = betterApproach(decimalNumber);
    
    cout<<"Binary representation: "<<binary<<endl;


    return 0;
}