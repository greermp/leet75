#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        map<char, char> b_pairs = { {'[',']'},
                                    {'(',')'},
                                    {'{','}'}};
        
        for (char c : s)
        {

        }
    }
    // {
    //     if (s.size()%2!=0){ return false; }
    //     stack<char> opening;     
    //     stack<char> closing;
    //     // assume only brackets/braces/parens...
    //     for (char c : s)
    //     {
    //         if (c=='(' || c=='[' ||c=='{' )
    //             opening.push(c);
    //         else{
    //             if (opening.size() == 0) { return false; }
    //             switch (c)
    //             {
    //             case '}':
    //                 if (opening.top() == '{'){
    //                     opening.pop();
    //                     break;
    //                 }
    //                 return false;
    //             case ']':
    //             if (opening.top() == '['){
    //                 opening.pop();
    //                 break;
    //             }
    //             return false;
    //             case ')':
    //             if (opening.top() == '('){
    //                 opening.pop();
    //                 break;
    //             }
    //             return false;
    //             default:
    //                 cout<<"ERROR"<<endl;
    //                 return false;
    //             }
    //         }
    //     }
    //     return opening.size() == 0;
    // }
};

int main() {
    Solution solution;
    cout << solution.isValid("[]");
    cout << solution.isValid("([{}])");
    cout << solution.isValid("[(])");
    cout << solution.isValid("[[");
    cout << solution.isValid("[");
    cout << solution.isValid("]]");
    return 0;
}

/*
Valid Parentheses
You are given a string s consisting of the following characters: '(', ')', '{', '}', '[' and ']'.

The input string s is valid if and only if:

Every open bracket is closed by the same type of close bracket.
Open brackets are closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
Return true if s is a valid string, and false otherwise.

Example 1:

Input: s = "[]"

Output: true
Example 2:

Input: s = "([{}])"

Output: true
Example 3:

Input: s = "[(])"

Output: false
Explanation: The brackets are not closed in the correct order.

Constraints:

1 <= s.length <= 1000
*/