/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:23 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:24 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int
main(void) {

	Karen	karen;

	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");

	karen.complain("PIZZA");

	karen.complain("ERROR");
	karen.complain("WARNING");
	karen.complain("DEBUG");
	karen.complain("INFO");

	return 0 ;
}
