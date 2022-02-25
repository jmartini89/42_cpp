/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:20:04 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/02 15:20:05 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iostream>

class Contact {

public:
	Contact();
	~Contact();

	std::string		getData(int dataindex) const;
	void			setData(int dataindex, std::string str);

private:
	std::string		_data_arr[5];

};

#endif
