#include <algorithm>
#include <iostream>
#include <iterator>
#include <limits>
#include <sstream>
#include <vector>

auto binary_search(std::vector<int> arr, int target) -> int {
    auto left = 0;
    int right = arr.size() - 1
    while (left <= right) {
        auto mid = left + (right - left) / 2;
        if (arr.at(mid) == target) return mid;
        if (arr.at(mid) < target) {
            left = mid + 1;
        } else {
            right = mid + 1;
        }
    }
    return -1;
}

template<typename T>
std::vector<T> get_words() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream ss{line};
    ss >> std::boolalpha;
    std::vector<T> v;
    std::copy(std::istream_iterator<T>{ss}, std::istream_iterator<T>{}, std::back_inserter(v));
    return v;
}

auto ignore_line() -> void {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

auto main() -> int {
    std::vector<int> arr = get_words<int>();
    int target;
    std::cin >> target;
    ignore_line();
    int res = binary_search(arr, target);
    std::cout << res << '\n';
}
