/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:14 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:15 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
public:
	Weapon(std::string name);
	~Weapon(void);

	const std::string&	getType(void);
	void				setType(std::string w_type);

private:
	std::string	_type;
};

#endif
