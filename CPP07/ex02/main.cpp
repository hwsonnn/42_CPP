#include "Array.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Array<int> i_arr(42);
	Array<std::string> s_arr(3);

	try
	{
		std::cout << i_arr.size() << std::endl;
		for (unsigned int i = 0; i < i_arr.size(); i++)
		{
			i_arr[i] = i;
			std::cout << i_arr[i] << " ";
		}
		std::cout << std::endl;
		Array<int> i_arr2(i_arr);
		for (unsigned int i = 0; i < i_arr2.size(); i++)
			std::cout << i_arr2[i] * 10 << " ";
		std::cout << std::endl;
		std::cout << i_arr[100] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}

	try
	{
		std::cout << s_arr.size() << std::endl;
		s_arr[0] = "Hi";
		s_arr[1] = "My Name Is";
		s_arr[2] = "hson";
		for (unsigned int i = 0; i < s_arr.size(); i++)
			std::cout << s_arr[i] << " ";
		std::cout << std::endl;
		std::cout << s_arr[50] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}

	{
		int *a = new int();
		std::cout << *a << std::endl;
	}
	int *a = new int[3];
	std::cout << *a << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	return (0);
}