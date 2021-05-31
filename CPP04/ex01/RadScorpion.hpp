#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		virtual ~RadScorpion();
		RadScorpion(const RadScorpion& src);
		RadScorpion& operator=(const RadScorpion& src);

		virtual void takeDamage(int damage);
};

#endif