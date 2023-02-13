/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:17:57 by marvin            #+#    #+#             */
/*   Updated: 2022/11/11 13:17:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("Giorno", 1);
		std::cout << a << std::endl;
		a.decGrade();
		std::cout << a << std::endl;
		a.incGrade();
		std::cout << a << std::endl;
		a.incGrade();
		std::cout << a << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat a("Jonathan", -1);
		std::cout << a << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat a("Koich", 150);
		std::cout << a << std::endl;
		a.decGrade();
		std::cout << a << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return (0);
}
