#include <bits/stdc++.h>
using namespace std;

int binarySearchIterative(vector<int>&arr,int target){

    int n = arr.size();
    int low = 0;
    int high = n -1;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == target){
            return mid;
        }
       else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid-1;
        }
        
    }
    return -1;
}

int binarySearchRecursive(vector<int> &arr,int target,int low,int high){
    if(low>high){
        return -1;
    }
    int mid = (low + high )/2;
    if(arr[mid] == target){
        return mid;
    }
    else if (arr[mid] < target)
        return binarySearchRecursive(arr,target, mid + 1, high);
    else
        return binarySearchRecursive(arr, target,low, mid - 1);
}

int main(){

    vector<int>arr ={10,20,30,40,50};
    int target = 30;
//    cout<<binarySearchIterative(arr,90)<<endl;
    cout<<binarySearchRecursive(arr,target,0,arr.size()-1);

    return 0;
}