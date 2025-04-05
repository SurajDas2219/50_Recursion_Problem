// Reverse a String:Reverse a given string using recursion.
#include <bits/stdc++.h>
using namespace std;


// recursive method
void reverseString(string &s,int i ,int j){

    if(i>=j){
        return;
    }

    swap(s[i],s[j]);
    return reverseString(s, i+1,j-1);
}

// Iterative Method

void reverseStringIterative(string &s,int i ,int j){

    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }

}

int main(){
    string s = "rahul";
    // reverse(s.begin(),s.end());
    // reverseString(s,0,s.length()-1);
    reverseStringIterative(s,0,s.length()-1);
    cout<<s<<endl;
    return 0;
}