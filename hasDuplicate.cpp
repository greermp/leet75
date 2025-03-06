#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int> nums) {
        unordered_map<int, int> intCounter;

        for (auto n : nums){
            if (intCounter.count(n) > 0)
                return true;
            intCounter[n] = 1;
        }
        
        return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1,2,3,3};
    cout << solution.hasDuplicate(nums);
    nums = {1,2,3,4};
    cout << solution.hasDuplicate(nums);
    return 0;
}

/*
Contains Duplicate
Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

Example 1:

Input: nums = [1, 2, 3, 3]

Output: true

Example 2:

Input: nums = [1, 2, 3, 4]

Output: false
*/