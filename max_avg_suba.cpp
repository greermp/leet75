#include <iostream>
#include <vector>
#include <cfloat>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    //     // TODO: Implement your solution
    //     // double avg = -DBL_MAX;
    //     double avg = -DBL_MAX;
    //     double sum = 0;
    //     ///             3    5
    //     ///             4    5
    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         sum += nums[i];

    //         // if i+1>k, we need to subtract the leading window...
    //         if (i+1 > k) // eg K is 2 and we are at i=2, we have summed 3 elements...
    //             sum -= nums[i-k]; // remove the (front) end of the window
            
    //         // if i+1 >= k, we want to calculate an average. 
    //         if (i+1 >= k) // If we have K elements in our sum..
    //             if (sum/k >= avg) { avg=sum/k; }
    //     }
        
    //     return(avg);
    // }

    double max_sum = -DBL_MAX;
    double sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        // if i+1>k, we need to subtract the leading window...
        if (i+1 > k) // eg K is 2 and we are at i=2, we have summed 3 elements...
            sum -= nums[i-k]; // remove the (front) end of the window
        
        // if i+1 >= k, we want to calculate an average. 
        if (i+1 >= k) // If we have K elements in our sum..
            if (sum > max_sum) { max_sum=sum; }
    }
    
    return(sum/k);
    }
};

int main() {
    Solution solution;
    vector<int> vec {2,2,2,2,3};

    cout << solution.findMaxAverage(vec, 2);
    return 0;
}
// You are given an integer array nums consisting of n elements, and an integer k.

// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

 

// Example 1:

// Input: nums = [1,12,-5,-6,50,3], k = 4
// Output: 12.75000
// Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
// Example 2:

// Input: nums = [5], k = 1
// Output: 5.00000
 

// Constraints:

// n == nums.length
// 1 <= k <= n <= 105
// -104 <= nums[i] <= 104