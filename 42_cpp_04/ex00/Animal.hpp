/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:57:35 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/09 19:02:25 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
protected:
	std::string		_type;

public:
	Animal();
	Animal(Animal const & src);
	virtual ~Animal();

	Animal&		operator=(Animal const & rhs);

	std::string		getType() const;
	virtual void	makeSound() const;
};

#endif
