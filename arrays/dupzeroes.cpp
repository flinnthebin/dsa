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
	auto duplicateZeroes(std::vector<int>& nums) -> std::vector<int> {
		return {};
	}
};

auto main() -> int {
	Solution solution;

	auto exvec_1 = std::vector{1, 0, 2, 3, 0, 4, 5, 0};
	auto exvec_2 = std::vector{1, 2, 3};

	auto resvec_1 = std::vector{1, 0, 0, 2, 3, 0, 0, 4};
	auto resvec_2 = std::vector{1, 2, 3};

	assert(solution.duplicateZeroes(exvec_1) == resvec_1);
	assert(solution.duplicateZeroes(exvec_2) == resvec_2);
}
