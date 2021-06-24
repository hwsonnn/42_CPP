#include "span_1.hpp"
#include <ctime>

int main(void)
{
	srand(time(NULL));

	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	{
		Span sp = Span(100);
		for (int i = 0; i < 100; i++)
			sp.addNumber(rand() % 1000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		try
		{
			sp.addNumber(42);
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
	}

	{
		Span sp = Span(1);
		sp.addNumber(42);

		try
		{
			// Span sp = Span(0);
			// sp.addNumber(42);
			// int *로 만들 경우 0개 공간 할당할 때 인덱스 배열에서 seg fault

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
	}

	return (0);
}