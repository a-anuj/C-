#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void heapify_max(vector<int> &arr,int n,int i){
    int left = 2*i+1;
    int right = 2*i+2;
    int largest = i;

    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }

    if(right<n && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest != i){
        swap(arr[i],arr[largest]);
        heapify_max(arr,n,largest);
    }
}


void buildMaxHeap(vector<int> &arr,int n){
    for(int i = n/2 -1 ; i>=0;i--){
        heapify_max(arr,n,i);
    }
}


void heapSort(vector<int> &arr,int n){
    buildMaxHeap(arr,n);

    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify_max(arr,i,0);
    }
}

void printArray(vector<int> &arr,int n){
    cout << "[";
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout << "]";
}


int main(){
    vector<int> arr = {45,23,78,90,13,46};
    int n = arr.size();
    cout << "Before sorting : ";
    printArray(arr,n);
    buildMaxHeap(arr,n);
    cout << "\nAfter sorting : ";
    printArray(arr,n);
    cout << endl;
    return 0;
}