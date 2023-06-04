#include <iostream>
#include <concepts>
using namespace std;
template <typename T>
auto add(T a, T b) {
	return a + b;
}

int main()
{
	std::cout << "hello c++ 20" << std::endl;
	std::cout << "The sum is :" << add(7,3) << std::endl;
	return 0;
}


