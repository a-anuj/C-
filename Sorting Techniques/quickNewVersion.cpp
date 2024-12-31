#include<bits/stdc++.h>
using namespace std;
/*int partition(vector<int> &arr,int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[high],arr[i+1]);
    return i+1;
}
*/


int partition(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    for(int j=low+1;j<=high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i],arr[low]);
    return i;
}



void quickSort(vector<int> &arr,int low,int high){
    if(low<high){
        int pivot = partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}

int main(){
    vector<int> arr = {4,5,3,1,7,8,2};
    cout << "Before Sorting : "<<endl;
    for(int i=0;i<(arr.size());i++){
        cout << arr[i] << " ";
    }

    quickSort(arr,0,arr.size()-1);
    cout << "\nAfter Sorting : "<<endl;
    for(int i=0;i<(arr.size());i++){
        cout << arr[i] << " ";
    }
}