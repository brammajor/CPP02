/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:07:43 by brmajor           #+#    #+#             */
/*   Updated: 2024/01/04 14:16:50 by brmajor          ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif