/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <jmartini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:31 by jmartini          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:32 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int
main(int argc, char **argv) {

	if (argc != 2) {
		std::cerr << "Wrong number of arguments" << std::endl;
		return 1 ;
	}

	Karen	karen(argv[1]);

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
