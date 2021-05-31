#include "Fixed.hpp"

//기본생성자
Fixed::Fixed(void) : val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

//소멸자
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

//복사생성자
Fixed::Fixed(const Fixed& fixed)
{
	std::cout<<"Copy constructor called\n";
	val = fixed.getRawBits();
}

//대입(할당)연산자
Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	val = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (val);
}

void Fixed::setRawBits(int const raw)
{
	val = raw;
}