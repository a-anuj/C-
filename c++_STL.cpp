#include<bits/stdc++.h>
using namespace std;

void aboutPair(){
    pair<int,int> p={1,2};
    cout <<"first : "<< p.first<<"\nsecond : " << p.second << endl;
    pair<int,pair<char,char>> p2 = {1,{'a','b'}};
    cout << "First : " << p2.first<<endl;
    cout << "Second : " << p2.second.first << endl;
    pair<int,int> arr[] = { {1,2},{1,3},{1,4},{1,5} };
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout << arr[i].first << "," << arr[i].second << endl ;
    }
}


int main() {
    aboutPair();
    return 0;
}
