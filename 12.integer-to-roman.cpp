/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
#include <iostream>
#include <string>
#include <map>

std::map<int, char> map = {
  {1, 'I'},
  {5, 'V'},
  {10, 'X'},
  {50, 'L'},
  {100, 'C'},
  {500, 'D'},
  {1000, 'M'}
};

class Solution {
public:
    std::string intToRoman(int num) {
        std::string roman {""};
        std::string stringInt = std::to_string(num);

        int numLength = stringInt.length();
        int currentBase = numLength;

        for (int i = 0; i < numLength; i++) {
          //int Number 
        }
    }
};
// @lc code=end

