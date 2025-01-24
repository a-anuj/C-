#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void radixSort(vector<vector<int>>&triples,int maxvalue){
    int n = triples.size();
    int index;
    for(int index=2;index>=0;index--){
        vector<vector<vector<int>>> buckets(maxvalue);

        for(auto triple:triples){
            buckets[triple[index]].emplace_back(triple);
        }

        triples.clear();
        for(auto bucket:buckets){
            for(auto triple:bucket){
                triples.emplace_back(triple);
            }
        }       

    }
}



int main(){
    vector<vector<int>> triples ={{10,3,5}, {3,12,15}, {4,5,6}, {1,24,4}, {4,12,3}, {4,5,3}, {10,1,1},{5,2,35}, {15,38,2}, {15,2,38} }; 
    int maxvalue = 40;
    radixSort(triples,maxvalue);

    int maxVal=0;
    for(auto triple:triples){
        maxVal = max({maxVal,triple[0],triple[1],triple[2]});
    }

    cout << maxVal<<endl;



    int n = triples.size();
    cout << "Sorted Triples:" << endl;
    for (const auto& triple : triples) {
        cout << "{" << triple[0] << ", " << triple[1] << ", " << triple[2] << "}" << endl;
    }
}