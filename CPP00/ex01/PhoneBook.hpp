#ifndef PHONEWBOOK_HPP
# define PHONEWBOOK_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string contents[11];
		static std::string info[11];

	public:
		void	input_contact(void);
		void	show_contact(void);
		void	show_all(void);
};

class PhoneBook
{
	private:
		int		num;
		Contact	contact[8];

	public:
		PhoneBook(void);
		void	add_contact(void);
		void	search_contact(void);
};

#endif