// Greatest Common Divisor (GCD):Find the GCD of two numbers using recursion (Euclidean algorithm).
#include <bits/stdc++.h>
using namespace std;

// Recursive Approach

int recursiveGCD(int a ,int b){
    if ( b == 0){
        return a;
    }
    // Based on Eucliedean Principle
    return recursiveGCD(b, a % b);
}

/*
Naïve Approach to Find GCD
Approach:
Find the minimum of the two numbers, say min(A, B).
Iterate from min(A, B) down to 1.
Check if the number divides both A and B without a remainder.
Return the first number that satisfies the condition (which is the greatest divisor).

Time Complexity:
Worst-case: O(min(A,B))
If A = 10^9 and B = 10^9, it may take 10^9 iterations, which is very slow.

*/
int gcdNaive(int a , int b){
    if(b == 0){
        return a;
    }

    for(int i = min(a,b);i>=1;i--){
        if((a%i == 0) && (b%i == 0)){
            return i;
        }
    }
    return 1;
}

/*
Better Approach: Checking Common Factors up to min(A, B) / 2
Approach:
Find the minimum of A and B, say min(A, B).
Iterate from min(A, B) / 2 down to 1.
Check if the number divides both A and B.
Return the first number that satisfies the condition.

Time Complexity:
Worst-case: O(min(A,B)/2)

Still inefficient but twice as fast as the naïve approach.
*/

int gcdBetter(int a ,int b){
    if(b == 0){
        return a;
    }

    int limit = min(a,b)/2;
    for(int i = limit; i>=1 ;i--){
        if((a%i == 0) && (b%i == 0)){
            return i;
        }
    }
    return 1;

}

/*
Optimal Approach: Euclidean Algorithm
Approach:
The Euclidean algorithm is based on the principle that:
GCD(A,B)=GCD(B,A mod B)
If B = 0, then GCD is A.
Otherwise, replace A with B, and B with A % B, and repeat the process.

Time Complexity:
O(log(min(A,B))) → Very efficient even for large numbers like 10^9
 .
*/

int euclideanAlgo(int a ,int b){
    if(b == 0){
        return a;
    }

    while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

/*
Stein's Algorithm (Binary GCD)
Most Optimal Approach: Stein's Algorithm (Binary GCD)
Why is it better?
It avoids division/modulo operations and uses only bitwise shifts, making it faster on some hardware.
Runs in O(log(min(A, B))) like the Euclidean algorithm but often performs fewer iterations.

Algorithm Steps:
If A = 0, return B; if B = 0, return A.
If both A and B are even, return 2 × GCD(A / 2, B / 2).
If one is even and the other is odd, divide the even one by 2.
If both are odd, replace the larger one with (larger - smaller) and continue.
*/

int gcdStein(int A, int B) {
    if (A == 0) return B;
    if (B == 0) return A;

    // Both A and B are even
    if ((A & 1) == 0 && (B & 1) == 0)
        return gcdStein(A >> 1, B >> 1) << 1;

    // A is even, B is odd
    if ((A & 1) == 0)
        return gcdStein(A >> 1, B);

    // A is odd, B is even
    if ((B & 1) == 0)
        return gcdStein(A, B >> 1);

    // Both are odd, subtract and continue
    return gcdStein(abs(A - B), min(A, B));
}

int main(){

    int a = 56;
    int b = 98;

    // cout<<"The GCD of given number is: "<<gcdNaive(a,b)<<endl;
    // cout<<"The GCD of given number is: "<<gcdBetter(a,b)<<endl;
    cout<<"The GCD of given number is: "<<euclideanAlgo(a,b)<<endl;
    // cout<<"The GCD of given number is: "<<recursiveGCD(a,b)<<endl;
    // cout<<"The GCD of given number is: "<<gcdStein(a,b)<<endl;



    return 0;
}