#include<iostream>
using namespace std;
#include<vector>


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 1){
            return nums[0];
        }
        int current_sum = 0;
        int maxi = nums[0];
        for (int i = 0 ; i < nums.size();i++){
            current_sum += nums[i];
            current_sum = max(current_sum,nums[i]);
            maxi = max(maxi,current_sum);
        }
        return maxi;
        
    }
};