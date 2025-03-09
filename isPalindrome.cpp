#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>
#include <unordered_set>
using namespace std;


// TODO: Accomplish by reversing a string..
class Solution {
public:
    bool isPalindrome(string s) {
        int end_ptr = s.size()-1;
        int start_ptr = 0; 
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        while (start_ptr < end_ptr && start_ptr < s.size())
        {
            // Check if start_ptr is non-whitespace (else increment)
            if (isalnum(s[start_ptr]))
            { 
            // check if ptr2 is non whitespace (else decrement)
                if (isalnum(s[end_ptr]))
                {

                    if (s[start_ptr++] != s[end_ptr--])
                        return false;
                    cout << s[start_ptr-1] << " == " << s[end_ptr+1] << endl;
                }
                else
                {
                    end_ptr--;
                    continue;
                }
            }                   
            else{
                start_ptr++;
                continue;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    // cout << solution.isPalindrome("a") << endl;

    cout << solution.isPalindrome("0P") << endl;
    return 0;
}