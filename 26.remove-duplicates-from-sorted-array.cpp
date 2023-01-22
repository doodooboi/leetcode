/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

#include <iostream>
#include <vector>

using namespace std;
// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int nonDuped {0};

        for (int i = 1; i < nums.size(); i++) {
          if (nums[nonDuped] != nums[i]) {
            nums[++nonDuped] = nums[i];
          }
        }

        return nonDuped + 1;
    }
};
// @lc code=end

