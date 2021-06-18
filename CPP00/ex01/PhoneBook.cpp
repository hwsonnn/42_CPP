#include "PhoneBook.hpp"

std::string Contact::info[11] = 
{
	"FIRST NAME", "LAST NAME", "NICKNAME", "LOGIN", "POSTAL ADDRESS", \
	"EMAIL ADDRESS", "PHONE NUMBER", "BIRTHDAY DATE", "FAVORITE MEAL", \
	"UNDERWEAR COLOR", "DARKEST SECRET"
};

void	Contact::input_contact(void)
{
	std::cout << "Give information" << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << info[i] << " : ";
		std::getline(std::cin, contents[i]);
		if (std::cin.eof())
			exit(-1);
	}
}

void	Contact::show_contact(void)
{
	std::cout << "|";
	for (int i = 0; i < 3; i++)
	{
		if (contents[i].length() >= 10)
			std::cout << contents[i].substr(0,9) << ".";
		else
			std::cout << std::setw(10) << contents[i];
		std::cout << "|";
	}
	std::cout << std::endl;
}

void	Contact::show_all(void)
{
	for (int i = 0; i < 11; i++)
		std::cout << info[i] << " : " << contents[i] << std::endl;
}

PhoneBook::PhoneBook(void)
{
	num = 0;
}

void	PhoneBook::add_contact()
{
	if (num < 8)
		contact[num++].input_contact();
	else
		std::cout << "PhoneBook is full" << std::endl;
}

void	PhoneBook::search_contact()
{
	int	i;

	if (!num)
	{
		std::cout << "Nothing to Search" << std::endl;
		return ;
	}
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for (int i = 0; i < num; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i;
		contact[i].show_contact();
	}
	std::cout << "SEARCH for index : ";
	std::cin >> i;
	if (std::cin.eof())
		exit(-1);
	if (i < 0 || i >= num || std::cin.fail())
	{
		std::cout << "SEARCH WRONG INDEX" << std::endl;
		std::cin.clear();
	}
	else
		contact[i].show_all();
	std::cin.ignore(100, '\n');
}

int	main()
{
	std::string cmd;
	PhoneBook	pb;

	while (1)
	{
		std::cout << "You can input (ADD or SEARCH or EXIT) > ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			return (-1);
		if (cmd == "ADD")
			pb.add_contact();
		else if (cmd == "SEARCH")
			pb.search_contact();
		else if (cmd == "EXIT")
		{
			std::cout << "exit. Bye!" << std::endl;
			break ;
		}
		else
			std::cout << "That is wrong command!" << std::endl;
	}
	return (0);
}