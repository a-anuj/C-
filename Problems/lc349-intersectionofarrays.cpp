#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> intersection(vector<int> &nums1,vector<int> &nums2){
    unordered_set<int> set1(nums1.begin(),nums1.end());
    unordered_set<int> result;

    for(int it:nums2){
        if(set1.count(it)){
            result.insert(it);
        }
    }   

    vector<int> temp(result.begin(),result.end());

    return temp;
}
