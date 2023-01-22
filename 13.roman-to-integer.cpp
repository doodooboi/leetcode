/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include <string>
#include <iostream>
#include <map>

using namespace std;

std::map<char, int> Conversion = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};

class Solution {
public:
    int romanToInt(string s) {
         int sum {0};
         int skip {-1};

         for (int i = 0; i < s.length(); i++) {
             int Current = Conversion[s[i]];
             int Ahead {0};

             if (skip == i) {
                 skip = -1;
                 continue;
             }

             if (i + 1 <= s.length()) {
                 Ahead = Conversion[s[i+1]];

                 if (Current < Ahead) {
                     Current = Ahead - Current;
                     skip = i+1;
                 }
             }

             sum += Current;
         }

         return sum;
    }
};
// @lc code=end

