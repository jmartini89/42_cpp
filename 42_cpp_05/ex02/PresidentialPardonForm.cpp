/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:28:00 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/12 18:28:01 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
: Form("Presidential Pardon", target, 145, 137) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void
PresidentialPardonForm::doExecute() const {

	std::cout << this->getTarget()
	<< " has been pardoned by Zaphod Beeblebrox"
	<< std::endl;
}
