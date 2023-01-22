/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
          return false;
        } else if (x < 10) {
          return true;
        }

        bool palindrome {true};
        std::string stringified = std::to_string(x);

        for (int i = 0; i < stringified.length(); i++) {
          int ReversedIndex = (stringified.length() - i) - 1;

          palindrome = stringified[i] == stringified[ReversedIndex];

          if (!palindrome) {
            break; 
          }
        }

        return palindrome;
    }
};
// @lc code=end

