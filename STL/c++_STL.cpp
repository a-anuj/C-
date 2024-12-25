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

void aboutLists(){
    list<int> lst;
    lst.emplace_front(1);
    lst.emplace_back(2);
    lst.emplace_front(3);
    lst.emplace_back(4);

    for(list<int>::iterator it=lst.begin();it!=lst.end();it++){
        cout << *(it) << endl;
    }
}

void aboutDeque(){
    deque<pair<int,string>>dq;
    dq.emplace_back(1,"Apple");
    dq.emplace_back(2,"Ball");
    dq.emplace_back(3,"Cat");

    for(auto it:dq){
        cout << "(" << it.first << "," << it.second << ")" << endl;
    }
}

void aboutStacks(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    st.pop();
    cout << st.size() << endl;
}

void aboutQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Front Element : " << q.front() << endl;
    q.pop();
    cout << "Front Element : " << q.front() << endl;

}

void aboutPriorityQueue(){
    //Max-Heap
    priority_queue<int>pq;
    pq.push(1);
    pq.push(45);
    pq.push(67);
    pq.push(23);
    pq.push(12);
    cout << "Max-Heap : " << pq.top() << endl;

    //Min-Heap
    priority_queue<int, vector<int>, greater<int>>pq1;
    pq1.push(1);
    pq1.push(45);
    pq1.push(67);
    pq1.push(23);
    pq1.push(12);
    cout << "\nMin-Heap : " << pq1.top() << endl;

}

int main() {
    //aboutPair();
    //aboutVectors();
    //aboutLists();
    //aboutDeque();
    //aboutStacks();
    //aboutQueue();
    aboutPriorityQueue();
    return 0;
}
