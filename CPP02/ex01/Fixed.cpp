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

//int
Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->val = val<<bits;
}

//float
Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->val = roundf(val*(1<<bits));
}

//복사생성자
Fixed::Fixed(const Fixed& fixed)
{
	std::cout<<"Copy constructor called\n";
	//val = fixed.getRawBits();
	*this = fixed;
}

//대입연산자 오버로딩
Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	val = fixed.getRawBits();
	return (*this);
}


int	Fixed::getRawBits(void) const
{
	return (val);
}

void Fixed::setRawBits(int const raw)
{
	val = raw;
}

float Fixed::toFloat(void) const
{
	return((float)val/(1<<bits));
}

int Fixed::toInt(void) const
{
	return(val>>bits);
}



// <<연산자
std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out<<fixed.toFloat());
}



int main(void)
{
	Fixed 		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return (0);
}