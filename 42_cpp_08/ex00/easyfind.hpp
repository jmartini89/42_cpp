/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 13:00:08 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/19 13:00:09 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
#include <algorithm>
#include <exception>
#include <iostream>

template<typename T>
void easyfind(T const haystack, int const needle) {

	typename T::const_iterator candidate;

	candidate = std::find(haystack.begin(), haystack.end(), needle);

	if (candidate == haystack.end()) throw std::logic_error("Needle not found");

	std::cout << needle << " found!" << std::endl;
}

#endif
