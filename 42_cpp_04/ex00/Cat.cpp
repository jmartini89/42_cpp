/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:53:04 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/09 19:53:05 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() {

	this->_type = "Cat";

	std::cout << "Cat Constructor" << std::endl;
	return ;
}

Cat::Cat(Cat const & src) {

	std::cout << "Cat Copy Constructor" << std::endl;

	*this = src;
	return ;
}

Cat::~Cat() {
	std::cout << "Cat Destructor" << std::endl;
	return ;
}

void
Cat::makeSound() const {

	std::cout << this->_type << " MEOW" << std::endl;
	return ;
}
