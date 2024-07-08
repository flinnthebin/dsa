// std::binary_search

// Computes lower_bound
// Test on return

template <class T, class I, class P>
I
binary_search(I b, I e, const T& v, P p) {
    b = lower_bound(b, e, v, p);
    return b != e && !p(v, *b);
}
