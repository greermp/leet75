#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
    public:
        // void moveZeroes(vector<int>& nums) {
            
        //     // iterate over nums. keep track last numeric location... move 0s to end

        //     int zero_to_add = 0;

        //     for (int i = 0; i < nums.size(); i++)
        //     {

        //           if (nums[i] == 0){
        //             nums.erase(nums.begin() + i);
        //             i--;
        //             zero_to_add++;
        //         }
                
        //     }

        //     for (int i = 1; i <= zero_to_add; i ++){
        //         nums.push_back(0);
        //     }


        // }

// 101
/// >>> nums[i]=1 i=0, lnz=0  set nums[0] to nums [0], inc last_non_Zer
/// >>> nums[i]=0 i=1, lnz=1  increment i  only
/// >>> nums[i]=1 i=2, lnz=1  set nums[1] (lkz) to nums[2] (i)

        void moveZeroes(vector<int>& nums) {
            // iterate over nums. keep track last numeric location... move 0s to end
            int last_non_zero = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                // for each nums, if not 0, move to last non zero position...
                if (nums[i] != 0)
                {
                    nums[last_non_zero++] = nums[i];
                }
            }

            while (last_non_zero < nums.size())
            {
                nums[last_non_zero++] = 0;
            }
        }
    };

int main()
{
    Solution sol;
    vector<int> numzz = {0,1,0,0,2,2};
    for (auto z : numzz) {cout << z;}
    cout<<endl;
    sol.moveZeroes(numzz);

    for (auto z : numzz) {cout << z;}
    cout<<endl;


}


// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]
 

// Constraints:

// 1 <= nums.length <= 104
// -231 <= nums[i] <= 231 - 1
 

// Follow up: Could you minimize the total number of operations done?