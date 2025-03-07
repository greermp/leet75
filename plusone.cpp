#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // TODO: Implement your solution
        vector<int> ret;
        bool add = true;
        for (int i = digits.size()-1; i>=0; i--){
            
            if(add){
                if (digits[i]==9){
                    digits[i]=0;
                    add=true;
                }else{
                    digits[i]=digits[i]+1;
                    add=false;
                }
           }
        }

        if(add){
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};

int main() {
    Solution solution;
    vector<int> inp = {8,9,9};
    solution.plusOne(inp);
    return 0;
}