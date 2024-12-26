#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {

    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter element " << i+1 << endl;
        cin >> arr[i];
    }

    bubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}