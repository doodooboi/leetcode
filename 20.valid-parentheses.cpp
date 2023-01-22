/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start

#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, char> convert = {
  {'(', ')'},
  {')', '('},
  {'{', '}'},
  {'}', '{'},
  {'[', ']'},
  {']', '['}
};

class Solution {
public:
    bool isValid(string s) {
       bool valid {true};
       char lastBracket = s[0];

       if (s.length() < 2) {return false;}

       for (int i = 1; i < s.length(); i++) {
        if (isblank(lastBracket)) {
          lastBracket = s[i];
          continue;
        }
        std::cout << lastBracket << " " << convert[s[i]] << endl;

        valid = lastBracket == convert[s[i]];
        lastBracket = s[i];

        if (!valid) {
          if (i + 1 <= s.length()) {
            lastBracket = s[i];
            valid = lastBracket == convert[s[i+1]];
          }

          if (!valid) {break;}
        } else {
          lastBracket = ' ';
        }
       } 

       return valid;
    }
};
// @lc code=end

