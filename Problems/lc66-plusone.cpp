#include<iostream>
#include<bits/stdc++.h>

using namespace std;


vector<int> plusOne(vector<int>&digits){
    int n = digits.size();
    for(int i=n-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }
        else{
            digits[i] = 0;
        }
    }

    digits.insert(digits.begin(),1);
    return digits;

}

int main(){
    vector<int> digits = {8,8,8,9};
    vector<int> arr = plusOne(digits);
    for(int it:arr){
        cout << it;
    }
    cout << endl;
}