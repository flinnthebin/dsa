//  __  __               ____                                _   _ ___
// |  \/  | __ ___  __  / ___|___  _ __  ___  ___  ___ _   _| |_(_)_   _____   /
// _ \ _ __   ___  ___ | |\/| |/ _` \ \/ / | |   / _ \| '_ \/ __|/ _ \/ __| | |
// | __| \ \ / / _ \ | | | | '_ \ / _ \/ __|
// | |  | | (_| |>  <  | |__| (_) | | | \__ \  __/ (__| |_| | |_| |\ V /  __/ |
// |_| | | | |  __/\__ \
// |_|  |_|\__,_/_/\_\  \____\___/|_| |_|___/\___|\___|\__,_|\__|_| \_/ \___|
// \___/|_| |_|\___||___/

// Given a binary array nums, return the maximum number of consecutive 1's in
// the array.

// Example 1:
// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive
// 1s. The maximum number of consecutive 1s is 3.

// Example 2:
// Input: nums = [1,0,1,1,0,1]
// Output: 2

// Constraints

// 1 <= nums.length <= 10^5
// nums[i] is either 0 or 1

#include <cassert>
#include <vector>

class Solution {
 public:
	auto findMaxConsecutiveOnes(std::vector<int>& nums) -> int {
		auto count = 0;
		auto final = 0;
		for (auto const n : nums) {
			if (n == 1) {
				++count;
			}
			else {
				count = 0;
			}
			if (count > final) {
				final = count;
			}
		}
		return final;
	}
};

auto main() -> int {
	Solution solution;

	auto exvec_1 = std::vector{1, 1, 0, 1, 1, 1};
	auto exout_1 = int{3};

	auto exvec_2 = std::vector{1, 0, 1, 1, 0, 1};
	auto exout_2 = int{2};

	auto res_1 = solution.findMaxConsecutiveOnes(exvec_1);
	auto res_2 = solution.findMaxConsecutiveOnes(exvec_2);

	assert(exout_1 == res_1);
	assert(exout_2 == res_2);
}
