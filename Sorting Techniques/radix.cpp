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

/*

void insertionSort(vector<float> &bucket){
    int n = bucket.size();
    for(int i=1;i<n;i++){
        float key = bucket[i];
        int j = i-1;
        while(j>=0 && bucket[j]>key){
            bucket[j+1] = bucket[j];
            j--;
        }
        bucket[j+1] = key;
    }
}

void bucketSort(vector<float> &arr){
    int n = arr.size();
    vector<vector<float>> buckets(n);

    for(int i=0;i<n;i++){
        int bucketIndex = n * arr[i];
        buckets[bucketIndex].emplace_back(arr[i]);
    }

    for(int i=0;i<n;i++){
        insertionSort(buckets[i]);
    }

    int index=0;
    for(int i=0;i<n;i++){
        for(float it:buckets[i]){
            arr[index++] = it;
        }
    }

}

*/

int main(){
    vector<int> arr = {5,4,3,2,1,6,7};
    int n = 7;
    cout << "Before Sorting : "<<endl;
    printArray(arr,n);
    cout << endl;
    radixSort(arr,n);
    cout << "After Sorting : "<<endl;
    printArray(arr,n);
    cout << endl;
}

