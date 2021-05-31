#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	protected:
		int hp;
		std::string type;

	public:
		Enemy();
		Enemy(int hp, std::string const &type);
		virtual ~Enemy();
		Enemy(const Enemy& src);
		Enemy& operator=(const Enemy& src);

		std::string getType() const;
		int getHP() const;

		virtual void takeDamage(int damage) = 0;
};

#endif