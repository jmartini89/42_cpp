/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:09 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:10 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &Weapon);
	~HumanA(void);

	void	attack(void) const;

private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif
