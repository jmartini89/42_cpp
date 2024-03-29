/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:07 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:08 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _type(name) {}

Weapon::~Weapon() {}

const std::string&
Weapon::getType(void) {

	return this->_type;
}

void
Weapon::setType(std::string w_type) {

	this->_type = w_type;
	return ;
}
