#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>

class Span
{
	private:
		unsigned int N;
		int *arr;

		Span();
	
	public:
		Span(unsigned int N);
		Span(const Span &ref);
		~Span();
		Span& operator=(const Span &ref);

		void addNumber(int num);
		long long int shortestSpan();
		long long int longestSpan();

		class AlreadyExist : public std::exception
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