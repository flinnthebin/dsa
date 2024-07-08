/** std::upper_bound **

    - The partner algorithm to std::lower_bound
    - From the c++ std::binary_search implementation
    - Everything right of the result is strictly more
    - More informative/actionable than a bool

**Template Parameters**:

   - `T`: The type of the value to compare.
   - `I`: The iterator type.
   - `P`: The predicate type.

**Function Parameters**:

   - `b`: The beginning iterator.
   - `e`: The ending iterator.
   - `v`: The value to compare.
   - `p`: The predicate function.

**/
#include <cstddef>

template <class T, class I, class P>
I
upper_bound(I b, I e, const T& v, P p) {
    for (auto size = std::size_t{e - b}; size > 0;) {
        auto cut = size / 2;
        if (!p(v, b[cut])) {
            b += ++cut;
            size -= cut;
        } else {
            size = cut;
        }
    }
    return b;
}
