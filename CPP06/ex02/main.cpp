#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>

Base *createA(void)
{
	Base *a = new A();
	return (a);
}

Base *createB(void)
{
	Base *b = new B();
	return (b);
}

Base *createC(void)
{
	Base *c = new C();
	return (c);
}

Base *generate(void)
{
	srand(time(NULL));

	Base *(*crease_base[3])(void) =
	{
		createA,
		createB,
		createC
	};
	return (crease_base[rand() % 3]());
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}


int main(void)
{
	Base *g = generate();
	identify_from_pointer(g);
	identify_from_reference(*g);

	return (0);
}