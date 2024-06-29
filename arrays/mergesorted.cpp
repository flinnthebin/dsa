// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n,
// representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To
// accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged,
// and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

// Example 1

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]

// Example 2

// Input: nums1 = [1], m = 1, nums2 = [], n = 0
// Output: [1]

// Example 3

// Input: nums1 = [0], m = 0, nums2 = [1], n = 1
// Output: [1]

// Constraints:

// nums1.length == m + n
// nums2.length == n
// 0 <= m, n <= 200
// 1 <= m + n <= 200
// -109 <= nums1[i], nums2[j] <= 109

#include <cassert>
#include <vector>

class Solution {
 public:
	auto merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) -> void {}
};

auto main() -> int {
	Solution solution;

	auto exvec_m1 = std::vector<int>{1, 2, 3, 0, 0, 0};
	auto const m1 = 3;
	auto exvec_n1 = std::vector<int>{2, 5, 6};
	auto const n1 = 3;
	auto resvec_1 = std::vector<int>{1, 2, 2, 3, 5, 6};

	solution.merge(exvec_m1, m1, exvec_n1, n1);
	assert(exvec_m1 == resvec_1);

	auto exvec_m2 = std::vector<int>{1};
	auto const m2 = 1;
	auto exvec_n2 = std::vector<int>{};
	auto const n2 = 0;
	auto resvec_2 = std::vector<int>{1};

	solution.merge(exvec_m2, m2, exvec_n2, n2);
	assert(exvec_m2 == resvec_2);

	auto exvec_m3 = std::vector<int>{};
	auto const m3 = 0;
	auto exvec_n3 = std::vector<int>{1};
	auto const n3 = 1;
	auto resvec_3 = std::vector<int>{1};

	solution.merge(exvec_m3, m3, exvec_n3, n3);
	assert(exvec_m3 == resvec_3);
}
