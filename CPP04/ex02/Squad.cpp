#include "Squad.hpp"

Squad::Squad() : cnt(0), units(0)
{
}

Squad::~Squad()
{
	if (units)
	{
		for (int i = 0; i < cnt; i++)
			delete units[i];
		delete[] units;
		units = 0;
	}
}

Squad::Squad(const Squad& ref)
{
	cnt = 0;
	units = 0;
	*this = ref;
}

Squad& Squad::operator=(const Squad& ref)
{
	if (units)
	{
		for (int i = 0; i < cnt; i++)
			delete units[i];
		delete[] units;
	}
	cnt = ref.cnt;
	units = new ISpaceMarine*[ref.cnt];
	for (int i = 0; i < ref.cnt; i++)
		units[i] = ref.units[i]->clone();
	return (*this);
}

int Squad::getCount() const
{
	return (cnt);
}

ISpaceMarine* Squad::getUnit(int idx) const
{
	if (idx < 0 || idx >= cnt)
		return (0);
	return (units[idx]);
}

int Squad::push(ISpaceMarine* marine)
{
	if (!units)
	{
		units = new ISpaceMarine*[1];
		units[0] = marine;
		cnt = 1;		
	}
	else
	{
		for (int i = 0; i < cnt; i++)
		{
			if (units[i] == marine)
				return (cnt);
		}

		ISpaceMarine **tmp = new ISpaceMarine*[cnt + 1];
		for (int i = 0; i < cnt; i++)
			tmp[i] = units[i];
		tmp[cnt++] = marine;
		delete[] units;
		units = tmp;
	}
	return (cnt);
}