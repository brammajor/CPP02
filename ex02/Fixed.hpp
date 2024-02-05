/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:07:43 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/01 12:15:47 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class	Fixed
{
private:
	int					_value;
	static const int	_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& obj);
	Fixed(const int value);
	Fixed(const float value);
	Fixed& operator=(const Fixed& rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static const Fixed&	max(const Fixed& a, const Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static Fixed&	max(Fixed& a, Fixed& b);
	static Fixed&	min(Fixed& a, Fixed& b);

	bool	operator>(const Fixed& rhs);
	bool	operator<(const Fixed& rhs);
	bool	operator>=(const Fixed& rhs);
	bool	operator<=(const Fixed& rhs);
	bool	operator==(const Fixed& rhs);
	bool	operator!=(const Fixed& rhs);

	Fixed	operator+(const Fixed& rhs);
	Fixed	operator-(const Fixed& rhs);
	Fixed	operator*(const Fixed& rhs);
	Fixed	operator/(const Fixed& rhs);

	Fixed	operator++(void);
	Fixed	operator++(const int);
	Fixed	operator--(void);
	Fixed	operator--(const int);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif