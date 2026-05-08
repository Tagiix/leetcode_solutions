// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  vector<vector<char>> rotateTheBox(vector<vector<char>> &boxGrid) {
    vector<vector<char>> rotated(boxGrid[0].size(),
                                 vector<char>(boxGrid.size()));
    for (int i = 0; i < boxGrid.size(); i++) {
      int empty = boxGrid[i].size() - 1;
      for (int j = boxGrid[i].size() - 1; j >= 0; j--) {
        if (boxGrid[i][j] == '*') {
          rotated[j][boxGrid.size() - 1 - i] = '*';
          empty = j - 1;
        } else if (boxGrid[i][j] == '#') {
          rotated[empty][boxGrid.size() - 1 - i] = '#';
          empty--;
        }
      }
    }
    return rotated;
  }
};
// @leet end
