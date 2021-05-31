#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{
	protected:
		Peon();

	public:
		Peon(std::string name);
		virtual ~Peon();
		Peon(const Peon& src);
		Peon& operator=(const Peon& src);

		virtual void getPolymorphed() const; //파생클래스에서는 virtual을 생략해도 무방
};

#endif