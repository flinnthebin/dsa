// Given an integer array nums sorted in non-decreasing order, return an array
// of the squares of each number sorted in non-decreasing order.

// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]

// Example 2:

// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]

// Constraints:

// 1 <= nums.length <= 104
// -104 <= nums[i] <= 104
// nums is sorted in non-decreasing order.

#include <algorithm>
#include <cassert>
#include <vector>

class Solution {
public:
  auto sortedSquares(std::vector<int> &nums) -> std::vector<int> {
    for (auto &a : nums) {
      a = a * a;
    }
    std::sort(nums.begin(), nums.end());
    return nums;
  }
};

auto main() -> int {
  Solution solution;

  auto exvec_1 = std::vector<int>{-4, -1, 0, 3, 10};
  auto exvec_2 = std::vector<int>{-7, -3, 2, 3, 11};

  auto const resvec_1 = std::vector<int>{0, 1, 9, 16, 100};
  auto const resvec_2 = std::vector<int>{4, 9, 9, 49, 121};

  assert(solution.sortedSquares(exvec_1) == resvec_1);
  assert(solution.sortedSquares(exvec_2) == resvec_2);
}
