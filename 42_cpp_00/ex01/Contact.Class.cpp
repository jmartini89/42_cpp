/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:19:59 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/02 15:20:00 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string
Contact::getData(int dataindex) const {

	return this->_data_arr[dataindex];
}

void
Contact::setData(int dataindex, std::string str) {

	this->_data_arr[dataindex] = str;

	return;
}
