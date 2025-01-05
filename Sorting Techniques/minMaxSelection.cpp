#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionSortMinMax(vector<int> &arr, int n){
    int left = 0;
    int right = n-1;

    int minindex = left;
    int maxindex = left;

    while(left<right){

        for(int i=left;i<=right;i++){
            if(arr[i]<arr[minindex]){
                minindex = i;
            }

            if(arr[i]>arr[maxindex]){
                maxindex = i;
            }
        }

        swap(arr[left],arr[minindex]);

        if(maxindex==left){
            maxindex=minindex;
        }

        left++;
        right--;
    }
}

void printArray(vector<int> &arr,int n){
    for(auto it:arr){
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {9,8,7,6,5,4,3,2,1};
    printArray(arr,arr.size());
    selectionSortMinMax(arr,arr.size());
    printArray(arr,arr.size());
    return 0;
}