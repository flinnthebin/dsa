#include <iostream>
#include <vector>
#include <numeric>

auto main() -> int {

    std::vector<int> v(100);
    std::iota(v.begin(), v.end(), 1);

    for (auto const& x : v) {
        if (x % 3 == 0 and x % 5 == 0) {
            std::cout << "rizzbruz" << std::endl;
        } else if (x % 3 == 0) {
            std::cout << "rizz" << std::endl;
        } else if (x % 5 == 0) {
            std::cout << "bruz" << std::endl;
        } else {
            std::cout << x << std::endl;
        }
    }
    return 0;
}
