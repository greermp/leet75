#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return backtrack(0,0,nums,target);
    }

    /*
    * @brief recursive function
    *
    */
    int backtrack(int i, int cur_sum, vector<int>& nums, int target){
        if (i == nums.size()){
            return (cur_sum == target);
        }
        return backtrack(i+1, cur_sum+nums[i], nums, target) +
         backtrack(i+1, cur_sum-nums[i], nums, target);
    }
};

int main(){
    Solution sol;
    vector<int> vec = {2,2,2};
    cout << sol.findTargetSumWays(vec, 2);
    return 0;
}
    
    
    