/** std::lower_bound **

    - Uses indexing
    - No early return
    - Always worst case of log(n) Time Complexity
        - Single predicate call per pass
        - Less branches
    - Everything left of the result is strictly less
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
lower_bound(I b, I e, const T& v, P p) {
    for (auto size = std::size_t{e - b}; size > 0;) {
        auto cut = size / 2;
        if (p(b[cut], v)) {
            b += ++cut;
            size -= cut;
        } else {
            size = cut;
        }
    }
    return b;
}
