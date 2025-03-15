#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
/*
* Just sort and compare after comparing lengths..
*/
class Solution {
    public:
        bool isAnagram(string s, string t) {
            unordered_map<char, int> s_chars;
            
            for (char c : t) {
                int num = 0;
                if (s_chars.count(c)==1)
                    num = s_chars.at(c);
                
                s_chars[c] = num+1;

            }

            for (char c : s) {
                if (s_chars.count(c) == 0)
                    return false;

                if (s_chars.at(c) == 1) {
                    s_chars.erase(c);
                } else {
                    s_chars[c] = s_chars[c] - 1;
                }
            }
            
            return s_chars.empty();
        }
    };
    

int main() {
    Solution solution;

    // cout << solution.isAnagram("pow", "opw") << endl;
    cout << solution.isAnagram("racecar", "carrace") << endl;
    //cout << solution.functionName(var) << endl;
    return 0;
}