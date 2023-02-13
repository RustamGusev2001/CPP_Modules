/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:03:26 by marvin            #+#    #+#             */
/*   Updated: 2022/11/05 15:03:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie zombie1;

	randomChump( "Vaa" );

	Zombie *zombie2;
	zombie2 = newZombie("Oleg");
	delete zombie2;

	return 0;
}