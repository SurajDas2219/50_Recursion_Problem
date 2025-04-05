#include <bits/stdc++.h>
using namespace std;

// Iterative solution : O(N)
// 
// bool checkPalindrome(string& s){
//     int i = 0;
//     int j = s.length() - 1;

//     while( i <= j){
//         if(s[i] == s[j]){
//             i++;
//             j--;
//         }
//         else{
//             return false;
//         }
//     }

//     return true;
// }


bool checkPalindrome (string & s,int i,int j){
    // Base Case
    if(i>= j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    // Dont do i++ or j-- either do ++i the j-- or i+1 and j-1
    return checkPalindrome(s, i+1 ,j-1);
    
}
int main(){

    string s = "noon";

    if(checkPalindrome(s,0,s.length()-1)){
        cout<<"The Given string is palindrome"<<endl;
    }
    else{
        cout<<"The Given string is not a palindrome"<<endl;
    }

    return 0;
}