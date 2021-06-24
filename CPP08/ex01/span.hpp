#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <set>

class Span
{
	private:
		unsigned int N;
		std::vector<int> v; //컨테이너는 할당의 개념이 X

		Span();
	
	public:
		Span(unsigned int N);
		Span(const Span &ref);
		~Span();
		Span& operator=(const Span &ref);

		void addNumber(int num);
		void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();

		class FullInts : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NoSpan : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif