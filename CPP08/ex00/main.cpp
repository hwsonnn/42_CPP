#include <iostream>
#include <vector>
#include <string>
#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
	for (int i = 1; i < 5; i++)
    	v.push_back(i);
    std::vector<int>::iterator it = easyfind(v, 2);
    if (it == v.end())
		std::cout << "cannot find 2 in vector" << std::endl;
	else
		std::cout << *it << std::endl;

    {
        std::vector<int> test;
		test.push_back(3);
		test.push_back(4);
		// std::vector<int>::iterator it;        
		// for (it=test.begin(); it != test.end(); it++)
		// {
		// 	int n = *it;
		// 	std::cout << n;
		// 	if (it+1 != test.end())
		// 		std::cout << " and ";
		// } 
		// std::cout << std::endl;
		// std::cout << *test.end() <<std::endl;

		if (easyfind(test, 1) == test.end())
     	   std::cout << "cannot find 1 in vector" << std::endl;
		else
			std::cout << *easyfind(test, 1) << std::endl;
	}
}