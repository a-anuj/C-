#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[],int u, int v){
    adj[u].emplace_back(v);
    adj[v].emplace_back(u);
}

void printGraph(vector<int> adj[], int V) {
    for (int i = 0; i < V; i++) {
        cout << i << " -> ";
        for (int x : adj[i])
            cout << x << " ";
        cout << endl;
    }
}


int main(){
    vector<int> adjList;
    
}