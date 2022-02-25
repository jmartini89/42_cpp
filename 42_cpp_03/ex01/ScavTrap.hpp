/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:16:00 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/06 18:12:59 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	ScavTrap&	operator = (ScavTrap const & rhs);

	void	attack(std::string const & target) const;
	void	guardGate() const ;
};

#endif
