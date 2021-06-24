#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void f(T p)
{
	std::cout << p << std::endl;
}

int main(void)
{
	int i[3] = {1, 2, 3};
	iter(i, 3, f);

	char c[3] = {'a', 'b', 'c'};
	iter(c, 3, f);

	float fl[3] = {1.3f, 2.5f, 3.6f};
	iter(fl, 3, f);

	double d[3] = {1.33, 2.55, 3.66};
	iter(d, 3, f);

	std::string s[3] = {"hson", "hyopark", "jinbekim"};
	iter(s, 3, f);

	return (0);
}