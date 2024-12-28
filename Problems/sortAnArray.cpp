#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quick(nums,0,nums.size()-1);
        return nums;
    }

    void quick(vector<int> &nums,int low,int high){
        if(low<high){
            int pivot = findPartion(nums,low,high);
            quick(nums,low,pivot-1);
            quick(nums,pivot+1,high);
        }
    }

    int findPartion(vector<int> &nums,int low,int high){
        int pivot_index = (low+high)/2;
        int pivot = nums[pivot_index];

        int temp = nums[pivot_index];
        nums[pivot_index] = nums[low];
        nums[low] = temp;

        int i = low;
        int j = high;
        while(i<j){
            while(nums[i]<=pivot && i<=high-1){
                i++;
            }
            while(nums[j]>=pivot && j>=low+1){
                j--;
            }

            if(i<j){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
        int temp = nums[low];
        nums[low] = nums[j];
        nums[j] = temp;
        return j;
    }


};