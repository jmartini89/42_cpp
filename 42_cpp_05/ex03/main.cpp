/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:21:12 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/12 16:21:13 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#include <iostream>

int
main(void) {

	Intern		nobody;
	Form *		form;
	Bureaucrat	gigi("Gigi", 1);

	try {

		form = nobody.makeForm("pardon", "jmartini");
		gigi.signForm(*form);
		gigi.executeForm(*form);
		delete form;

		std::cout << std::endl;

		form = nobody.makeForm("robotomy", "jmartini");
		gigi.signForm(*form);
		gigi.executeForm(*form);
		delete form;

		std::cout << std::endl;

		form = nobody.makeForm("shrubbery", "jmartini");
		gigi.signForm(*form);
		gigi.executeForm(*form);
		delete form;

		std::cout << std::endl;

		form = nobody.makeForm("wrong", "whatever");
		gigi.signForm(*form);
		gigi.executeForm(*form);
		delete form;
	}
	catch (std::exception const & e) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	return 0 ;
}
