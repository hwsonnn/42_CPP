#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materia[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &ref)
{
	for (int i = 0; i < 4; i++)
		materia[i] = 0;
	*this = ref;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete materia[i];
		materia[i] = 0;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &ref)
{
	for (int i = 0; i < 4; i++)
	{
		delete materia[i];
		materia[i] = 0;
	}
	for (int i = 0; i < 4; i++)
		materia[i] = ref.materia[i] ? ref.materia[i]->clone() : 0;
	return(*this);
}


void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->materia[i])
		{
			this->materia[i] = materia;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] && materia[i]->getType() == type)
			return (materia[i]->clone());
	}
	return (0);
}