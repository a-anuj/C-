#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Item{
    int value;
    int weight;
};

bool comparator(Item val1, Item val2){
    double r1 = (double)val1.value/(double)val1.weight;
    double r2 = (double)val2.value/(double)val2.weight;
    return r1>r2;
}

double knapsackFraction(Item arr[],int w, int n){
    sort(arr,arr+n,comparator);
    int currentWeight = 0;
    double total = 0.0;

    for(int i=0;i<n;i++){
        if(currentWeight+arr[i].weight <=w){
            currentWeight+=arr[i].weight;
            total+=arr[i].value;
        }
        else{
            int remain = w-currentWeight;
            total += ((double)arr[i].value/(double)arr[i].weight)*remain;
            break;
        }
    }
    return total;
}

int main(){
    int n = 3;
    int w = 50;
    Item arr[n] = {{100,20},{60,10},{120,30}};
    double ans = knapsackFraction(arr,w,n);
    cout << ans << endl;
}