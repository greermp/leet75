
#include <string>
#include <cassert>
#include <iostream>
using namespace std;
class Solution {
public:
    bool checkGcd(string prefix, const string *ls)
    {
        int loops  = ls->length() / prefix.length();
        string concatenated_string = prefix;
        for (int i = 1; i < loops; i++)
        {
            concatenated_string += prefix;
        }
        return (concatenated_string == *ls) ;
    }

    string gcdOfStrings(string str1, string str2) {
        std::string* ls;
        std::string* ss;

        // determine which string is LS
        if (str1.length()>str2.length())
        {
            ls = &str1;
            ss = &str2;
        }else
        {
            ls = &str2;
            ss = &str1;
        }

        // Start with ss, and pop of a letter until you find gcd.
        for (int i = ss->length(); i>=0; i--)
        {
            string prefix = ss->substr(0,i);
            // no GCD if length == 0
            if (prefix.length() == 0) { return ""; }

            // lengths must be divisibile..
            if ( ls->length() % prefix.length() == 0 ) 
            { 
                // cout << prefix << " is a candidate." << endl;
                if (checkGcd(prefix, ls)) { return prefix; };
            } else{
                // cout << "SKIP!" << ls->length() << "NOT DIVIS BY " << prefix.length() << endl;
                continue;
            }
        }

         return "";
    }

    
};

int main()
{
    Solution my_s;
    
    assert(my_s.gcdOfStrings("ABCABCABCABC", "ABCABC") == "ABCABC");
    cout<<"Passsed test 1/3"<<endl;
    assert(my_s.gcdOfStrings("ABCABCD", "ABCABC") == "");
    cout<<"Passsed test 2/3"<<endl;
    assert(my_s.gcdOfStrings("TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX", "TAUXXTAUXXTAUXX") == "TAUXX"); // I fail this test. Why is TAUXXTAUXXTAUXX not correct
    cout<<"Passsed test 3/3"<<endl;
    
}


// Example 1:

// Input: str1 = "ABCABC", str2 = "ABC"
// Output: "ABC"
// Example 2:

// Input: str1 = "ABABAB", str2 = "ABAB"
// Output: "AB"
// Example 3:

// Input: str1 = "LEET", str2 = "CODE"
// Output: ""
 