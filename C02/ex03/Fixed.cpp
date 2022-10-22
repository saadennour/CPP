#include "Fixed.hpp"

Fixed::Fixed()
{
	nvalue = 0;
	std::cout << "Fixed Default constructor called\n";
}

Fixed::Fixed(const int data)
{
	nvalue = (data << nfbits);
	std::cout << "Fixed Int constructor called\n";
}

Fixed::Fixed(const float data)
{
	nvalue = data * (1 << nfbits);
	std::cout << "Fixed Float constructor called\n";
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Fixed Copy constructor called\n";
	*this = a;
}

Fixed::~Fixed()
{
	std::cout << "Fixed Destructor called\n";
}

int		Fixed::toInt(void) const
{
	return ((this->nvalue >> (this->nfbits)));
}

float	Fixed::toFloat(void) const
{
	float	result = this->nvalue;

	result /= (1 << this->nfbits);
	return (result);
}

void	Fixed::setRawBits(int const raw)
{
	this->nvalue = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->nvalue;
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called\n";
	this->nvalue = copy.nvalue;
	return *this;
}

Fixed	Fixed::operator++()
{
	this->nvalue++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;
	
	tmp.nvalue = this->nvalue++;
	return (tmp);
}

Fixed	Fixed::operator--()
{
	this->nvalue--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;

	tmp.nvalue = this->nvalue--;
	return (tmp);
}

Fixed	Fixed::operator+(const Fixed &copy)
{
	Fixed	tmp;

	tmp = this->toFloat() + copy.toFloat();
	// std::cout << "tmp is " << tmp << " with " << this->toFloat() << " + " << copy.toInt() << "\n";
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &copy) const
{
	Fixed	tmp;

	tmp = this->toFloat() - copy.toFloat();
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &copy) const
{
	Fixed	tmp;

	tmp = this->toFloat() * copy.toFloat();
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &copy)
{
	Fixed	tmp;

	tmp = this->toFloat() / copy.toFloat();
	return (tmp);
}

bool	Fixed::operator>(const Fixed &copy)
{
	if (this->nvalue > copy.nvalue)
		return (1);
	return (0);
}

bool	Fixed::operator<(const Fixed &copy)
{
	if (this->nvalue < copy.nvalue)
		return (1);
	return (0);
}

bool	Fixed::operator>=(const Fixed &copy)
{
	if (this->nvalue >= copy.nvalue)
		return (1);
	return (0);
}

bool	Fixed::operator<=(const Fixed &copy)
{
	if (this->nvalue <= copy.nvalue)
		return (1);
	return (0);
}

bool	Fixed::operator==(const Fixed &copy)
{
	if (this->nvalue == copy.nvalue)
		return (1);
	return (0);
}

bool	Fixed::operator!=(const Fixed &copy)
{
	if (this->nvalue != copy.nvalue)
		return (1);
	return (0);
}

std::ostream& operator<< (std::ostream &out, const Fixed &copy)
{
	out << copy.toFloat();
	return out;
}

Fixed&	Fixed::min(Fixed& nb1, Fixed& nb2)
{
	if (nb1.nvalue < nb2.nvalue)
		return (nb1);
	else
		return (nb2);
}

const Fixed&	Fixed::const_min(const Fixed& nb1, const Fixed& nb2)
{
	if (nb1.nvalue < nb2.nvalue)
		return (nb1);
	else
		return (nb2);
}

Fixed&	Fixed::max(Fixed& nb1, Fixed& nb2)
{
	if (nb1.nvalue > nb2.nvalue)
		return (nb1);
	else
		return (nb2);
}

const Fixed&	Fixed::const_max(const Fixed& nb1, const Fixed& nb2)
{
	if (nb1.nvalue > nb2.nvalue)
		return (nb1);
	else
		return (nb2);
}