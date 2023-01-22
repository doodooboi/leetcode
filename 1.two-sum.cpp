/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result = {0,0};
        bool stop {false};

        for (int i = 0; i < nums.size(); i++) {
          if (stop) {break;}

          for (int j = 0; j < nums.size(); j++) {
            if (i == j) {continue;}

            if ((nums[i] + nums[j]) == target) {
              result[0] = i;
              result[1] = j;

              stop = true;
              break; 
            }
          }
        }

        return result;
    }
};
// @lc code=end

