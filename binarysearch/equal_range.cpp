/** std::equal_range **

    - returns all but the value.

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

#include <utility>

template <class T, class I, class P>
std::pair<I, I>
equal_range(I b, I e, const T& v, P p) {
    I lower = lower_bound(b, e, v, p);
    I upper = upper_bound(lower, e, v, p);
    return std::make_pair(lower, upper);
}
