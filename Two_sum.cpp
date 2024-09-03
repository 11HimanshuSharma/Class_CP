#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end){
            if (nums[start] + nums[end]  == target){
                return {start,end};
            }
            else{
                if (nums[start] + nums[end] > target){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        return {-1,-1};
    }
};

int main(){
  Solution s;
  vector<int> nums = {2,4,6};
  int target = 6;
  vector<int> ans = s.twoSum(nums,target);
  cout << nums[0] << " " << nums[1];

}