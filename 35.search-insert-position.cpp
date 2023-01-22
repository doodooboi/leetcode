/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

#include <vector>

using namespace std;

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int closest {0};
        bool found {false};

        for (int i = 0; i < nums.size(); i++) {
          if (nums[closest] < nums[i]) {
            closest = i;
          }

          if (nums[i] == target) {

          }
        }
    }
};
// @lc code=end

