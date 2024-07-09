/** skewed_binary_search

    - Predicate is less
    - Useful when probability of out-of-bounds is high

**/

template <typename T, typename I, typename P>
I skewed_lower_bound(I b, I e, const T& v, P p) {
    if (b == e) return e;
    auto m = b + (e - b) / 2;
    if (p(*m, v)) {
    // Center-right of upper half
    for (b = m + 1; b < e; b = m + 1) {
        m = b + 3 * (e - b) / 4;
            if (!p(*m, v)) {
                e = m;
                break;
            }
        }
    } else {
    //Center-lef in lower half
        for (e = m; b < e; e = m) {
            if (p(*m - v)) {
                b = m + 1;
                break;
            }
        }
    }
    // Complete bounded search
    return std::lower_bound(b, e, v, p);
}
