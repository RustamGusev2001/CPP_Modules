/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:03:06 by marvin            #+#    #+#             */
/*   Updated: 2022/11/05 15:03:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv) {
	int i;

	if (argc == 2)
	{
		i = std::atoi(argv[1]);
		if (i <= 0) {
			std::cout << "Wrong arguments\n";
			return (1);
		}
		Zombie *zombie = zombieHorde(i, "Zombie" );
		for (int j = 0; j < i; ++j)
			zombie[j].announce();
		delete[] zombie;
	}
	else
		std::cout << "Wrong arguments\n";
	return 0;
}