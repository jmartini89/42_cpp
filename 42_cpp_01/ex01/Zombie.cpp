/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:04:49 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/04 20:04:50 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void ){

	return ;
}

Zombie::~Zombie ( void ) {

	std::cout << "DEBUG: Zombie " << this->_name << " destructed" << std::endl;
	return ;
}

void
Zombie::announce ( void ) const {

	std::cout << "<" << this->_name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void
Zombie::setName(std::string name) {

	this->_name = name;
	return ;
}
