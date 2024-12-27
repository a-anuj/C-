#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        ++arr[i];
    }
}


int main() {
    vector<int>arr = {1,2,5,3,7,6};
    printVector(arr,6);
    for(int i=0;i<6;i++){
        cout << arr[i] << endl;
    }
    return 0;
}