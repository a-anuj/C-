#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(vector<float> &arr,int n){
    for(float i:arr){
        cout << i << " ";
    }
    cout << endl;
}

void insertionSort(vector<float>& bucket){
    int n = bucket.size();
    for(size_t i=1;i<n;i++){
        float key = bucket[i];
        int j = i-1;
        while(j>=0 && bucket[j]>key){
            bucket[j+1] = bucket[j];
            j--;
        }
        bucket[j+1] = key;
    }
}



void bucketSort(vector<float>& arr){
    int n = arr.size();
    vector<vector<float>> buckets(n);

    for(int i=0;i<n;i++){
        int bucketIndex = n*arr[i];
        buckets[bucketIndex].emplace_back(arr[i]);
    }

    for(int i=0;i<n;i++){
        insertionSort(buckets[i]);
    }

    int index = 0;
    for(int i=0;i<n;i++){
        for(float j:buckets[i]){
            arr[index++] = j;
        }
    }
}

int main(){
    vector<float> arr = {0.34,0.12,0.56,0.67,0.98,0.80};
    cout << "Before sorting : ";
    print(arr,arr.size());
    bucketSort(arr);
    cout << "Before sorting : ";
    print(arr,arr.size());
}