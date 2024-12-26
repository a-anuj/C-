#include<iostream>
using namespace std;

int main() {
    int arr[] = {45,67,2,4,56,78,98,45,23};
    int n = 9;
    for(int i=0;i<n;i++){
        int minindex = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
    cout << "[";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "]";
    return 0;
}

