#include "Pony.hpp"

void	ponyOnTheHeap(std::string name_)
{
	Pony *pony_heap = new Pony("heap", name_);
	delete pony_heap;
}

void	ponyOnTheStack(std::string name_)
{
	Pony pony_stack("stack", name_);
}

int	main(void)
{
	ponyOnTheHeap("A");
	ponyOnTheHeap("AA");

	ponyOnTheStack("B");
	ponyOnTheStack("BB");

	return (0);
}