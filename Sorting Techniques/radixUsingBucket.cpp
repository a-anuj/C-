#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
int maxElement(vector<int> &arr){
    return *max_element(arr.begin(),arr.end());
}


void radixSort(vector<int> &arr){
    int n = arr.size();
    int exp = 1;
    int max = maxElement(arr);

    
    while((max/exp)>0){
        vector<vector<int>> buckets(10);
        for(int i=0;i<n;i++){
            int digit = (arr[i]/exp)%10;
            buckets[digit].emplace_back(arr[i]);
        }

        int index=0;
        for(int i=0;i<10;i++){
            for(int it:buckets[i]){
                arr[index++]=it;
            }
        }
        exp*=10;
    }

}


int main(){
    vector<int> arr = {4,3,2,7,9,10};
    radixSort(arr);
    for(int it:arr){
        cout << it << " ";
    }
    return 0;
}

*/


void radixSort(vector<int>& arr){
    int n = arr.size();
    int maximum = *max_element(arr.begin(),arr.end());
    int exp = 1;

    while((maximum/exp)>0){
        vector<vector<int>> buckets(10);

        for(int i=0;i<n;i++){
            int digit = (arr[i]/exp)%10;
            buckets[digit].emplace_back(arr[i]);
        }

        int index = 0;
        for(int i=0;i<10;i++){
            for(int it:buckets[i]){
                arr[index++] = it;
            }
        }
        exp*=10;
    }
}

int main(){
    vector<int> arr= {18,29,16,23,7};
    int n = arr.size();
    radixSort(arr);
    for(int it:arr){
        cout << it << " ";
    }
}

