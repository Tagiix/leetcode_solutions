// @leet imports start
#include <bits/stdc++.h>
#include <limits>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  int threeSumClosest(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    int min_dist{numeric_limits<int>::max()};
    int n{static_cast<int>(nums.size())};
    int value_at_min_dist{nums[0] + nums[1] + nums[2]};
    for (int i{}; i < n; ++i) {
      int left{i + 1};
      int right{n - 1};
      while (left < right) {
        int sum{nums[i] + nums[left] + nums[right]};
        int dist{abs(sum - target)};
        if (dist < min_dist) {
          min_dist = dist;
          value_at_min_dist = sum;
          if (min_dist == 0) return target;
        }
        if (sum > target) right--;
        else left++;
      }
    }
    return value_at_min_dist;
  }
};
// @leet end
