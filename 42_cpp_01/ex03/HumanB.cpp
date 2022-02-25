/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:03 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:04 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB(void) {}

void
HumanB::attack(void) const {

	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;

	return ;
}

void
HumanB::setWeapon(Weapon& weapon) {

	this->_weapon = &weapon;

	return ;
}
