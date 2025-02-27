#include <string>
#include <iostream>
using namespace std;
class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            string return_string = "";
            int str1_length = word1.length();
            int str2_length = word2.length();
            int i = 0;
            //      0 < 3
            while ( i <str1_length)
            {
                return_string = return_string + word1[i];
                // cout << return_string << endl;
                if (i <  str2_length){
                    return_string = return_string + word2[i];
                    // cout << return_string << endl;
                }
                i++;
            }
            // if i is 2 and str2.len is >=3, we want to return
            //   abc   wxyz    i+1=3,  word2.l = 4
            if ( str2_length >str1_length )
            {
                return_string = return_string + word2.substr(i, str2_length -str1_length);
                // cout << return_string << endl;
            }
            return return_string;
        }
    };
#include <iostream>
using namespace std;
int main() {
    Solution sol;
    cout << sol.mergeAlternately("abc", "xyz") << endl;
    cout << sol.mergeAlternately("abc", "wxyz") << endl;
    cout << sol.mergeAlternately("abcd", "pq") << endl;
 }

// You are given two strings word1 and word2. Merge the strings by adding 
//letters in alternating order, starting with word1. If a string is longer than the other, 
//append the additional letters onto the end of the merged string.

// Return the merged string.

 

// Example 1:

// Input: word1 = "abc", word2 = "pqr"
// Output: "apbqcr"
// Explanation: The merged string will be merged as so:
// word1:  a   b   c
// word2:    p   q   r
// merged: a p b q c r
// Example 2:

// Input: word1 = "ab", word2 = "pqrs"
// Output: "apbqrs"
// Explanation: Notice that as word2 is longer, "rs" is appended to the end.
// word1:  a   b 
// word2:    p   q   r   s
// merged: a p b q   r   s
// Example 3:

// Input: word1 = "abcd", word2 = "pq"
// Output: "apbqcd"
// Explanation: Notice that as word1 is longer, "cd" is appended to the end.
// word1:  a   b   c   d
// word2:    p   q 
// merged: a p b q c   d
 

// Constraints:

// 1 <= word1.length, word2.length <= 100
// word1 and word2 consist of lowercase English letters.