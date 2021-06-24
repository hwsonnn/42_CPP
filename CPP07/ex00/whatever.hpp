#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
	// T tmp;
	// tmp = a;
	T tmp = a; //기본생성자가 없는 클래스의 경우, 위 코드는 생성이 안됨
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return (a);
	else
		return (b); 
}

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return (a);
	else
		return (b); 
}

#endif