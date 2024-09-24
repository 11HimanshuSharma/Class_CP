#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> nums = {1,2,3,4};
  vector<int> res;

  int prefix = 1;
  for (int i = 0 ; i < nums.size();i++){
    res[i] = push_back(prefix);
    prefix *= nums[i];
  }
  int suffix = 1;
  for (int i = nums.size() - 1; i >= 0 ; i--){
    res[i] *= suffix;
    suffix *= nums[i];
  }

  for (int i = 0 ; i < res.size();i++){
    cout << res[i] << " ";
  }
}