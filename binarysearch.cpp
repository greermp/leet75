#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            
            int left  = 0;
            int right = nums.size()-1;
            int index;
            
            // start as 0 and len-1
            while (left < right)
            {
                // start at middle
                index = right / 2;
                
                if (nums[index] == target)
                    return index;
                
                //
                if (target < nums[index]){
                    right = index-1;
                } else {
                    left = index+1;
                }

            }

            return -1;

        }
    };


    
    
int main() {
    Solution solution;
    vector<int> nums = {1,4,5,7,8,10};
    // cout << solution.search(nums, 2) << endl;

    nums = {1,10};
    cout << solution.search(nums, 10) << endl;
    // cout << solution.search(nums, 1) << endl;
    // cout << solution.search(nums, 0) << endl;
    return 0;
}