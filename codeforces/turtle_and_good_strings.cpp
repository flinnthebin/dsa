#include <iostream>
#include <string>

class Turtle {
    static const int min_k = 2;

    auto i_neq_j(std::string input) -> bool {
        auto i = 0;
        auto j = input.size() - 1;
        return !(input[i] == input[j]);
    }

    auto process_input() -> void {
        std::string line;
        int count;

        while (std::getline(std::cin, line)) {
            if (count > 2 && count % 2 == 1) {
                if (line.size() >= min_k) {
                    if (i_neq_j(line)) {
                        std::cout << "Yes";
                    }
                    std::cout << "No";
                }
            }
        }
    }

};

auto main() -> int {
    
}
