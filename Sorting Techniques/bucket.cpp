#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &arr,int n){
    for(int i:arr){
        cout << i << " ";
    }
    cout << endl;
}

void insertionSort(vector<int>& bucket){
    int n = bucket.size();
    for(size_t i=1;i<n;i++){
        int key = bucket[i];
        int j = i-1;
        while(j>=0 && bucket[j]>key){
            bucket[j+1] = bucket[j];
            j--;
        }
        bucket[j+1] = key;
    }
}


int findMaxElement(vector<int> &arr,int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }

    return max;
}



void bucketSort(vector<int>& arr){
    int n = arr.size();
    int maxi = findMaxElement(arr,n);
    int min = *min_element(arr.begin(),arr.end());
    int bsize = ((maxi-min)/(n))+1;
    vector<vector<int>> buckets(bsize);
    
    for(int i=0;i<n;i++){
        int bucketIndex = (arr[i]-1)/(5-1);
        buckets[bucketIndex].emplace_back(arr[i]);
    }
    
    for(int i=0;i<n;i++){
        insertionSort(buckets[i]);
    }

    int index = 0;
    for(int i=0;i<n;i++){
        for(int j:buckets[i]){
            arr[index++] = j;
        }
    }
}

int main(){
    vector<int> arr = {5,4,3,2,1};
    cout << "Before sorting : ";
    print(arr,arr.size());
    bucketSort(arr);
    cout << "Before sorting : ";
    print(arr,arr.size());
}