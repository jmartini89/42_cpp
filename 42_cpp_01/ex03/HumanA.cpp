/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:01 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:02 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& Weapon) : _name(name), _weapon(Weapon) {}

HumanA::~HumanA(void) {}

void
HumanA::attack(void) const {

	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;

	return ;
}
