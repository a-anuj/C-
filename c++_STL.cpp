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


void aboutVectors(){
    vector<int> v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    vector<int>::iterator it = v.begin();
    //cout << *(++it) << endl;

    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    v.emplace_back(7);

    for(vector<int>::iterator it=v.begin();it !=v.end();it++){
        cout << *(it) << endl;
    }

    cout << "\n";

    for(auto it : v){
        cout << it << endl;
    }

    // v.erase() and v.begin() will always accept only the address value whether to delete or to add

    vector<int> v1 = {1,2,3,4,5};
    v1.erase(v1.begin()+2,v1.end());

    cout << " \n";
    for(auto it:v1){
        cout<<it<<endl;
    }

    cout << "\n";
    cout << v1.back();
    vector<int> v2;

    cout << "Copy Vector : ";
    for(auto it:v2){
        cout<<it<<endl;
    }

    if(v2.empty()){
        cout << "\nEmpty Vector";
    }
    else{
        cout << "Not Empty!!";
    }
    cout << "\n";
    vector<int> vec = {1,2,3,4,5,6,7};
    vec.insert(vec.begin(),2,100);
    for(auto it : vec){
        cout << it << endl;
    }
}


int main() {
    //aboutPair();
    aboutVectors();
    return 0;
}
