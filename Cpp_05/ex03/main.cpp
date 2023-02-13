/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:36:09 by marvin            #+#    #+#             */
/*   Updated: 2022/11/11 13:36:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat me("Denis", 20);

	Intern a;
	Form * f = a.makeForm("robotomy form", "sweet");

	std:: cout << *f << std::endl;
	me.signForm(*f);
	try
	{
		f->execute(me);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return (0);
}
