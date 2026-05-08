// @leet imports start
#include <bits/stdc++.h>
#include <vector>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  vector<string> letterCombinations(string digits) {
    if (digits.empty()) return {};
    unordered_map<char, string> phone = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
        {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
    };
    vector<string> res{""};
    for (char d : digits) {
      vector<string> new_res;
      for (const string& s : res)
        for (char c : phone[d])
          new_res.push_back(s + c);
      res = std::move(new_res);
    }
    return res;
  }
};
// @leet end
