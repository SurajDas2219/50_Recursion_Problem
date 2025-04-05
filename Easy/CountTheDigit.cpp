#include <bits/stdc++.h>
using namespace std;

int countNoOfDigit(int n){

    // Base Case
    if(n == 0){
        return 0;
    }
    int ans = 1 + countNoOfDigit(n/10);
    return ans;
}

int main (){
    int n = 1234;

    cout<<countNoOfDigit(n)<<endl;
    return 0;
}

 // Simple Approach
    // string s = to_string(n);
    // cout<<s.length()<<endl;

    // Iterative Solution
    // int num = n;
    // int ans = 0;

    // while(num > 0){
    //     ans++;
    //     num = num/10;
    // }

    // cout<<ans<<endl;