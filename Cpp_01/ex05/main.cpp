/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:19:25 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 17:19:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[]){

	if (ac != 2){
		std::cout<<"Invalid args\n";
		return (1);
	}

	Harl harl;
	while (av[1] != NULL)
	{
		std::string lvl(av[1]);
		harl.complain(lvl);
		return (0);
	}
	std::cout<<"Invalid NULL\n";
	return (0);
}