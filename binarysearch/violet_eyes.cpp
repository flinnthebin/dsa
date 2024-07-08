// Violet Eyes Binary Search

// First comparison is in the middle of the range
// Each pass reduces search space by half
// 2 predicate calls per pass
// May return early if element is found
// Not found decision made after range collapse

template <typename I, typename T>
bool
binary_search(I b, I e, const T& v) {
    while (b < e) {
        auto m = b + (e - b) / 2;
        if (v < *m) {
            e = m;
        } else if (*m < v) {
            b = m + 1;
        } else {
            return true;
        }
    }
    return false;
}
