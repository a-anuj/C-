#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int mySqrt(int x){
    for(int i=1;i<=x;i++){
        if(i*i == x){
            return i;
        }
        if(i*i >x){
            return i-1;
        }
    }
    return 0;
}


int main(){
    int n = 1;
    cout << mySqrt(n);
}

