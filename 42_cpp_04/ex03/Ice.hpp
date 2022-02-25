/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 03:37:42 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/10 15:38:20 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	Ice(Ice const & src);
	~Ice();

	Ice &	operator=(Ice const & rhs);

	Ice *	clone() const;
	void	use(ICharacter & target);

};

#endif
