#include <bits/stdc++.h>
using namespace std;

void print_subsequences(string input , string output , int idx ,vector<string>& result){
    if(idx == input.length()){
        result.push_back(output);
        return;
    }
    // Include
    print_subsequences(input , output + input[idx] , idx +1 , result);
    // Excluded
    print_subsequences(input , output , idx +1 , result);
}


int main(){

    string input = "abc";
    int idx;
    vector<string>result;
    print_subsequences(input , "",0,result);

    for(string sub : result){
        cout << "\"" << sub << "\"" << endl;

    }

    return 0;
}