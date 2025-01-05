#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void insertionSort(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}




int main() {
    vector<int> arr = {8,7,6,5,4,3,2,1};
    int n = arr.size();
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    /*
    int n = 8;
    for(int i=1;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;*/
}

