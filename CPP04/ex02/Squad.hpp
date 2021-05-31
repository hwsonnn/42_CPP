#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		int cnt;
		ISpaceMarine **units;

	public:
		Squad();
		virtual ~Squad();
		Squad(const Squad& ref);
		Squad& operator=(const Squad& ref);

		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int idx) const;
		virtual int push(ISpaceMarine* marine);
};

#endif