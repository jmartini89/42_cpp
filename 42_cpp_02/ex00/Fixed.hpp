/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:18:41 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/04 20:22:18 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {

public:
	Fixed(void);
	Fixed(Fixed const & src); // copy constructor
	~Fixed();

	Fixed&		operator=(Fixed const & rhs); // assignment operator

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int					_fixedPoint;
	static const int	bits = 8;

};

#endif
