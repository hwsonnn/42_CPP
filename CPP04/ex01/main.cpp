#include "Character.hpp"

int main(void)
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
    if (b->getHP() <= 0)
    {
        delete b;
        b = 0;
    }
	std::cout << *me;

	me->equip(pr);
	std::cout << *me;

	me->attack(b);
	if (b->getHP() <= 0)
    {
        delete b;
        b = 0;
    }
    std::cout << *me;

	me->attack(b);
	if (b->getHP() <= 0)
    {
        delete b;
        b = 0;
    }
    std::cout << *me;

    delete me;
    if (b)
        delete b;
    delete pr;
    delete pf;

	return (0);
}