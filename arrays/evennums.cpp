//  _____                   _   _                 _
// | ____|_   _____ _ __   | \ | |_   _ _ __ ___ | |__   ___ _ __ ___
// |  _| \ \ / / _ \ '_ \  |  \| | | | | '_ ` _ \| '_ \ / _ \ '__/ __|
// | |___ \ V /  __/ | | | | |\  | |_| | | | | | | |_) |  __/ |  \__ \
// |_____| \_/ \___|_| |_| |_| \_|\__,_|_| |_| |_|_.__/ \___|_|  |___/
//
// Given an array nums of integers, return how many of them contain an even
// number of digits.
//
// Example 1:

// Input: nums = [12,345,2,6,7896]
// Output: 2

// Example 2:

// Input: nums = [555,901,482,1771]
// Output: 1

#include <cassert>
#include <string>
#include <vector>

class Solution {
public:
  auto findNumbers(std::vector<int> &nums) -> int {
    auto count = 0;
    for (auto num : nums) {
      auto alpha = std::to_string(num);
      if (alpha.size() % 2 == 0) {
        ++count;
      }
    }
    return count;
  }
};

auto main() -> int {
  Solution solution;

  auto exvec_1 = std::vector{12, 345, 2, 6, 7896};
  auto exout_1 = int{2};

  auto exvec_2 = std::vector{555, 901, 482, 1771};
  auto exout_2 = int{1};

  auto res_1 = solution.findNumbers(exvec_1);
  auto res_2 = solution.findNumbers(exvec_2);

  assert(res_1 = exout_1);
  assert(res_2 = exout_2);
}
