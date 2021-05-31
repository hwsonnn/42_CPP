#ifndef MateriaSource_HPP
# define MateriaSource_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& ref);
		virtual ~MateriaSource();
		MateriaSource& operator=(const MateriaSource& ref);

		virtual void learnMateria(AMateria *materia);
		virtual AMateria* createMateria(std::string const &type);
};

#endif