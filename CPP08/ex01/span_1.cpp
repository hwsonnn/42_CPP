#include "span_1.hpp"

Span::Span(unsigned int N)
{
	this->N = N;
	arr = new int[N];
	for (unsigned int i = 0; i < N; i++)
		arr[i] = 0;
}

Span::Span(const Span &ref)
{
	N = ref.N;
	arr = new int[N];
	for (unsigned int i = 0; i < N; i++)
		arr[i] = ref.arr[i];
}

Span::~Span(void)
{
	delete[] arr;
}

Span& Span::operator=(const Span &ref)
{
	if (this == &ref)
		return (*this);

	delete[] arr;
	N = ref.N;
	arr = new int[N];
	for (unsigned int i = 0; i < N; i++)
		arr[i] = ref.arr[i];

	return (*this);
}

void Span::addNumber(int num)
{
	if (arr[N - 1])
		throw AlreadyExist();
	int i = 0;
	while (arr[i])
		i++;
	arr[i] = num;
}

// 우선 컨테이너에 있는 클래스들을 사용을 안했고
// algorithm 헤더에 있는 std::sort 등을 배열에서도 쓸 수  ..?
// 낫 클린코드 느낌 , 일일이 비교하는 것 같아 ,,
long long int Span::shortestSpan(void)
{
	if (N <= 1)
		throw NoSpan();
	long long int tmp = (long long)INT_MAX - INT_MIN;
	for (int i = 0; i < (int)N - 1; i++)
	{
		if ((long long)std::abs(arr[i + 1] - arr[i]) <= tmp)
			tmp = (long long)std::abs(arr[i + 1] - arr[i]);
	}
	return (tmp);
}

// 그리고 애초에 잘못 해석했음. 값 사이의 최대최소 차이가 아니라
// 안에 있는 값 전체를 대상으로 비교하는 거였어
long long int Span::longestSpan(void)
{
	if (N <= 1)
		throw NoSpan();
	long long int tmp = 0;
	for (int i = 0; i < (int)N - 1; i++)
	{
		if ((long long)std::abs(arr[i + 1] - arr[i]) >= tmp)
			tmp = (long long)std::abs(arr[i + 1] - arr[i]);
	}
	return (tmp);
}

const char* Span::AlreadyExist::what() const throw()
{
	return ("N is already exists!\n");
}

const char* Span::NoSpan::what() const throw()
{
	return ("Cannot Check Span because N <= 1\n");
}