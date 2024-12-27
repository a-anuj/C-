#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int findPivotElement(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }

        while(arr[j]>=pivot && j>=low+1){
            j--;
        }

        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quickSort(vector<int> &arr,int low,int high){
    if(low<high){
        int pivot = findPivotElement(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}

int main(){
    vector<int> arr = {9,8,7,6,5,4,3,2,1};
    int n = 9;
    cout << "Before Sorting : ";
    cout << "[";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "]";
    quickSort(arr,0,n-1);
    cout << "\nAfter Sorting : ";
    cout << "[";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "]";
    return 0;
}