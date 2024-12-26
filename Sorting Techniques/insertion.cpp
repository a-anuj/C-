#include<iostream>
using namespace std;

int main() {
    int arr[] = {8,7,6,5,4,3,2,1};
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
    return 0;
}