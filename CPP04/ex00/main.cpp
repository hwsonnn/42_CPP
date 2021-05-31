#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");

    Victim jim("Jimmy");
    Peon joe("Joe");
    Peon A(joe);

    std::cout << robert << jim << joe << A;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(A);

	return (0);
}