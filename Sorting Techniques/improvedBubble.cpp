#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int didSwap = 0;

    for(int i=n-1;i>=0;i++){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }
        }

        if(didSwap==0){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}