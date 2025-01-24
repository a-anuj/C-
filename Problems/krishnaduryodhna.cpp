#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int partitionASC(vector<int> &arr,int high,int low){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSortASC(vector<int> &arr,int high,int low){
    if(low<high){
        int pivot = partitionASC(arr,high,low);
        quickSortASC(arr,pivot-1,low);
        quickSortASC(arr,high,pivot+1);
    }
}

int partitionDESC(vector<int> &arr,int high,int low){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]>pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSortDESC(vector<int> &arr,int high,int low){
    if(low<high){
        int pivot = partitionDESC(arr,high,low);
        quickSortDESC(arr,pivot-1,low);
        quickSortDESC(arr,high,pivot+1);
    }
}



void sortAscending(vector<int> &arr){
    int n = arr.size();
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


void sortDescending(vector<int> &arr){
    int n = arr.size();
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


int main(){
    vector<int> krish = {30,10,40};
    vector<int> duryodh = {100,15,5};
    int n = krish.size();
    quickSortASC(duryodh,n-1,0);
    quickSortDESC(krish,n-1,0);


    int ans = 0;
    for(int i=0;i<n;i++){
        if(krish[i]>duryodh[i]){
            ans+=(krish[i]-duryodh[i]);
        }
    }

    cout << ans << endl;
}