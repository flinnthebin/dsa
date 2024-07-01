#include <iostream>

template <typename T = void>
struct A { virtual void print(){ std::cout << 'A' << std::endl; } };

struct B: A<B> { void print() override { std::cout << 'B' << std::endl; } };

auto main() -> int {
	A a = A(); A<B> a2 = B(); B b = B();

	a.print(); a2.print(); b.print();
}
