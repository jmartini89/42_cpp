/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 03:37:44 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/10 03:37:45 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	Cure(Cure const & src);
	~Cure();

	Cure &	operator=(Cure const & rhs);

	Cure *	clone() const;
	void	use(ICharacter & target);

};

#endif
