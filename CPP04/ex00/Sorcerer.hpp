#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
	private:
		std::string name;
		std::string title;
		
		Sorcerer(); //private에 있으면 인스턴스화를 할 수 없음(접근X)
	
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer();
		Sorcerer(const Sorcerer& src);
		Sorcerer& operator=(const Sorcerer& src);

		std::string getName() const;
		std::string getTitle() const;

		void polymorph(Victim const &victim) const;
};

std::ostream& operator<<(std::ostream& out, const Sorcerer& sorcerer);

#endif