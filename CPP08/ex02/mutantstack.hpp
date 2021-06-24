#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

class MutantStack : public std::stack
{
	private:
		/* data */
	public:
		MutantStack(/* args*/);
		MutantStack(const MutantStack &ref);
		~MutantStack();
		MutantStack& operator=(const MutantStack &ref);
};

#endif