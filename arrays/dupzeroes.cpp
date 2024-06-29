// Given a fixed-length integer array arr, duplicate each occurrence of zero,
// shifting the remaining elements to the right.

// Note that elements beyond the length of the original array are not written.
// Do the above modifications to the input array in place and do not return
// anything.

// Example 1

// Input: arr = [1,0,2,3,0,4,5,0]
// Output: [1,0,0,2,3,0,0,4]

// Example 2

// Input: arr = [1,2,3]
// Output: [1,2,3]

// Constraints:

// 1 <= arr.length <= 104
// 0 <= arr[i] <= 9

#include <cassert>
#include <vector>

class Solution {
 public:
	auto duplicateZeros(std::vector<int>& nums) -> std::vector<int> {
		for (auto i = 0; i < nums.size(); ++i) {
			if (nums[i] == 0 && (i + 1 < nums.size())) {
				for (auto j = nums.size() - 1; j > i + 1; j--) {
					std::swap(nums[j], nums[j - 1]);
				}
				nums[++i] = 0;
			}
		}
		return nums;
	}
};

auto main() -> int {
	Solution solution;

	auto exvec_1 = std::vector{1, 0, 2, 3, 0, 4, 5, 0};
	auto exvec_2 = std::vector{1, 2, 3};

	auto resvec_1 = std::vector{1, 0, 0, 2, 3, 0, 0, 4};
	auto resvec_2 = std::vector{1, 2, 3};

	assert(solution.duplicateZeros(exvec_1) == resvec_1);
	assert(solution.duplicateZeros(exvec_2) == resvec_2);
}
