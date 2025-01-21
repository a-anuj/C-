#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void addVertex(){

}


int main(){
    cout << "Enter the number of vertices : "<<endl;
    int nodes;
    cin >> nodes;
    int adjm[nodes][nodes]={0};
    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
            cout << adjm[i][j];
        }
    }
    return 0;
}