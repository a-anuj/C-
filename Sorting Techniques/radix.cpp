#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printArray(vector<int> &arr,int n){
    cout << "[" ;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout << "]";
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

void countSort(vector<int> &arr, int n,int exp){
    vector<int> countArray(10,0);
    vector<int> output(n);

    for(int i=0;i<n;i++){
        int digit = (arr[i]/exp)%10;
        countArray[digit]++;
    }

    for(int i=1;i<10;i++){
        countArray[i] = countArray[i]+countArray[i-1];
    }

    for(int i=n-1;i>=0;i--){
        int digit = (arr[i]/exp)%10;
        output[--countArray[digit]] = arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i] = output[i];
    }
}


void radixSort(vector<int> &arr,int n){
    int max = findMaxElement(arr,n);

    for(int exp = 1;max/exp > 0;exp*=10){
        countSort(arr,n,exp);
    }
}


int main(){
    vector<int> arr = {789,345,12,78,34,908};
    int n = 6;
    cout << "Before Sorting : "<<endl;
    printArray(arr,n);
    cout << endl;
    radixSort(arr,n);
    cout << "After Sorting : "<<endl;
    printArray(arr,n);
    cout << endl;
}

