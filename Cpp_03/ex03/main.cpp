/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:00:27 by marvin            #+#    #+#             */
/*   Updated: 2022/11/09 19:29:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	ClapTrap Zhelez("Zhelez");
	ClapTrap Yascher("Yascher");
	Zhelez.attack("Yascher");
	Yascher.takeDamage(2);
	Yascher.beRepaired(1);

	std::cout << "-------------" << std::endl;
	ScavTrap Zhelez2("Zhelez2");
	ScavTrap Yascher2("Yascher2");
	Zhelez2.attack("Yascher2");
	Yascher2.takeDamage(2);
	Yascher2.beRepaired(1);
	Zhelez2.guardGate();
	Yascher2.guardGate();

	std::cout << "-------------" << std::endl;
	FragTrap Zhelez3("Zhelez3");
	FragTrap Yascher3("Yascher3");
	Zhelez3.attack("Yascher3");
	Yascher3.takeDamage(25);
	Yascher3.beRepaired(33);
	Zhelez3.highFivesGuys();
	Yascher3.highFivesGuys();

	std::cout << "-------------" << std::endl;
	DiamondTrap Zhelez4("Zhelez4");
	DiamondTrap Yascher4("Yascher4");
	Zhelez4.attack("Yascher4");
	Yascher4.takeDamage(10);
	Yascher4.beRepaired(15);
	Zhelez4.whoAmI();
	Yascher4.whoAmI();
	std::cout << "-------------" << std::endl;

	return 0;
}