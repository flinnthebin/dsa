#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

template <typename T>
struct Node {
    T val;
    Node<T>* left;
    Node<T>* right;

    explicit Node(T val, Node<T>* left = nullptr, Node<T>* right = nullptr) : val{val}, left{left}, right{right} {}

    ~Node() {
        delete left;
        delete right;
    }
};

auto level_order_traversal(Node<int>* root) -> std::vector<std::vector<int>> {
    //TODO: FINISH THIS
}

template <typename T, typename Iter, typename F>
auto build_tree(Iter& it, F f) -> Node<T>* {
    auto val = std::string(*it);
    ++it;
    if (val == "x") return nullptr;
    Node<T>* left = build_tree<T>(it, f);
    Node<T>* right = build_tree<T>(it, f);
    return new Node<T>{f(val), left, right};
}

template <typename T>
auto get_words() -> std::vector<T> {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream ss{line};
    ss >> std::boolalpha;
    std::vector<T> v;
    std::copy(std::istream_iterator<T>{ss}, std::istream_iterator<T>{}, std::back_inserter(v));
    return v;
}

template <typename T>
auto put_words(const std::vector<T>& v) -> void {
    if (!v.empty()) {
        std::copy(v.begin(), std::prev(v.end()), std::ostream_iterator<T>{std::cout, " "});
        std::cout << v.back();
    }
    std::cout << '\n';
}

auto main() -> int {
    auto root_vec = get_words<std::string>();
    auto root_it = root_vec.begin();
    Node<int>* root = build_tree<int>(root_it, [](auto s) {return std::stoi(s); });
    auto res = level_order_traversal(root);
    for (auto const row : res) {
        put_words(row);
    }
}
