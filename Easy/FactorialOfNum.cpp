#include <bits/stdc++.h>
using namespace std;

int getFactorial(int n){
    // Base Case
    if(n==0 || n==1){
        return 1;
    }

    // Main Case
    int fact = n * getFactorial(n-1);

    // Return 
    return fact;

}

int main(){

    int n =5;
    int fact=1;

    //Iterative
    // for(int i=n; i>=1 ;i--){
    //     fact*=i;
    // }
    // cout<<fact<<endl;
    cout<<"The Fcatorial of A Number is :"<< getFactorial(n) <<endl;


    return 0;
}