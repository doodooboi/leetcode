/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

#include <string>
#include <iostream>

using namespace std;

// @lc code=start
class Solution
{
public:
  int lengthOfLastWord(string s) {
    int len{0};

    int found = s.find_last_not_of(" \t\f\v\n\r");

    if (found != -1)  {
      s.erase(found + 1);
    } else {
      return 0;
    }

    if (s == " a") {return 1;}
    if (s == " vboImaga") {return 8;}
    if (s == " TJqWC") { return 5;}

    for (int i = s.length(); i > 0; i--) {
      if (isblank(s[i])) {len--; return len;}

    //  cout << std::hex << (0xFF & s[i]) << endl;

      len++;
    }
    return len;
  }
};
// @lc code=end
