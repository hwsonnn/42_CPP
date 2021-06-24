#include "span.hpp"
#include <ctime>

int main(void)
{
	srand(time(NULL));

	Span sp = Span(5);

	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch (std::exception &e)
    {
        std::cout << e.what();
    }
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }

	{
		std::vector<int> v;
		//std::vector<int> v(10000); 는 0으로 초기화된 10000개의 원소를 가지는 벡터
		for (int i = 0; i < 10000; i++)
			v.push_back(rand() % 1000);
		Span sp(10000);

		try
		{
			sp.addNumber(v.begin(), v.end());
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
		try
   		{
   		    std::cout << sp.shortestSpan() << std::endl;
   		    std::cout << sp.longestSpan() << std::endl;
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