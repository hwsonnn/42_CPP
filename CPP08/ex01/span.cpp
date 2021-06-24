#include "span.hpp"

Span::Span(unsigned int N) : N(N) {}

Span::Span(const Span &ref)
{
	*this = ref;
}

Span::~Span(void) {}

Span& Span::operator=(const Span &ref)
{
	if (this == &ref)
		return (*this);

	N = ref.N;
	v = ref.v;

	return (*this);
}

void Span::addNumber(int num)
{
	if (v.size() >= N)
		throw FullInts();
	v.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	while (start != end)
	{
		addNumber(*start);
		start++;
	}
}

int Span::shortestSpan()
{
	if (N <= 1)
		throw NoSpan();
	std::vector<int> tmp = v;
	std::sort(tmp.begin(), tmp.end());
	std::set<int> ret;
	for (unsigned int i = 0; i < N-1; i++)
		ret.insert(tmp[i+1] - tmp[i]);
	return (*ret.begin());
}

int Span::longestSpan()
{
	if (N <= 1)
		throw NoSpan();
	std::vector<int> tmp = v;
	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}

const char* Span::FullInts::what() const throw()
{
	return ("vector is full!\n");
}

const char* Span::NoSpan::what() const throw()
{
	return ("Cannot Check Span because N <= 1\n");
}