#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr,int n){
    for(auto it:arr){
        cout << it << " ";
    }
    cout << endl;
}

class priorityQueue{
    private:
        vector<int> heap;

        void upheap(int index){
            while (index>0)
            {
                int parent = (index-1)/2;
                if(heap[index]>heap[parent]) break;
                swap(heap[index],heap[parent]);
                index=parent;
            }
            
        }

        void downheap(int index){
            int n = heap.size();
            int left = 2*index+1;
            int right = 2*index+2;

            int smallest = index;
            if(left<n && heap[left]<heap[smallest]){
                smallest = left;
            }

            if(right<n && heap[right]<heap[smallest]){
                smallest = right;
            }

            if(smallest != index){
                swap(heap[smallest],heap[index]);
                downheap(smallest);
            }
        }

    public:

        void insert(int value){
            heap.emplace_back(value);
            upheap(heap.size()-1);
        }

        int removeMin(){
            if(heap.size()==0){
                cout << "Empty priority queue";
            }
            int minvalue = heap[0];
            heap[0] = heap.back();
            heap.pop_back();
            downheap(0);
            return minvalue;
        }

        bool isEmpty(){
            if(heap.size()==0){
                return true;
            }
            return false;
        }

};


void pqSort(vector<int> &arr,int n){
    priorityQueue priqueue;
    for(auto it:arr){
        priqueue.insert(it);
    }
    arr.clear();
    while(!priqueue.isEmpty()){
        arr.emplace_back(priqueue.removeMin());
    }
}


int main(){
    vector<int> arr = {4,7,1,9,4,3,6,8,7};
    int n = arr.size();
    printArray(arr,n);
    pqSort(arr,n);
    printArray(arr,n);
}