/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 21:26:38 by marvin            #+#    #+#             */
/*   Updated: 2022/11/12 21:26:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat me("Jotaro", 135);
	ShrubberyCreationForm form_sh("home");
	std::cout << form_sh << std::endl;
	me.signForm(form_sh);
	std::cout << std::endl << form_sh << std::endl;
	try
	{
		form_sh.execute(me);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "-------------------------------------------" << std::endl;
	Bureaucrat me2("Joseph", 40);
	RobotomyRequestForm form_rob("Roba");
	me2.signForm(form_rob);
	std::cout << std::endl << form_rob << std::endl;
	try
	{
		form_rob.execute(me2);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "------------------------------------------" << std::endl << std::endl;
	Bureaucrat me3("Jonathan", 30);
	PresidentialPardonForm form_pres("Chelovek");
	me3.signForm(form_pres);
	std::cout << std::endl << form_pres << std::endl;
	try
	{
		form_pres.execute(me3);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "------------------------------------------" << std::endl;
	Bureaucrat me4("Giorno", 1);
	PresidentialPardonForm form_pres2("Chelovek");//25- sign, 5 -exec
	me4.signForm(form_pres2);
	me4.executeForm(form_pres2);



	return (0);
}
