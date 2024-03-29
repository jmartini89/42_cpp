/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 01:55:32 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/11 19:32:55 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{

private:
	Bureaucrat();
	std::string		_name;
	int				_grade;

public:

	class GradeTooHighException : public std::exception {
	public:
		const char * what() const throw() { return "Bureaucrat's grade is too high" ; }
	};

	class GradeTooLowException : public std::exception {
	public:
		const char * what() const throw() { return "Bureaucrat's grade is too low" ; }
	};

	Bureaucrat(const std::string & name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat();

	Bureaucrat &	operator=(Bureaucrat const & rhs);

	std::string			getName() const;
	int					getGrade() const;

	void		incrGrade(int value);
	void		decrGrade(int value);

};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & i);

#endif
