#include <iostream>
#include <map>
#include <vector>

auto main() -> int {
	std::vector<int> input = {1, 2, 3, 4, 7};
	auto target = 7;

	std::map<int, int> hash;
	for (auto i = 0; i < input.size(); ++i) {
		hash.insert({input[i], i});
	}

	for (auto const& j : hash) {
		int res = j.first;
		int test = target - res;
		if (hash.find(test) != hash.end()) {
			auto ult = hash.find(test);
			if (j.second != ult->second) {
				std::cout << j.second << " " << ult->second << std::endl;
				return 0;
			}
		}
	}
	std::cout << "No result found" << std::endl;
	return 0;
}
