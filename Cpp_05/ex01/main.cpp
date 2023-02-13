/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:18:38 by marvin            #+#    #+#             */
/*   Updated: 2022/11/11 13:18:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat a("Jotaro", 1);
		Bureaucrat b(a);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
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
		Form b("f1", 0, 15);
		Form c(b);
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form b("f1", 100, 151);
		std::cout << b << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Form b("f1", 100, 15);
		Bureaucrat b2("Joseph", 101);
		b.beSigned(b2);
		std::cout << b << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Form b("f1", 100, 15);
		Bureaucrat b2("Jonathan", 100);
		b.beSigned(b2);
		b.beSigned(b2);
		std::cout << b << std::endl;
	}

	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	catch (const char * ex)
	{
		std::cout << ex << std::endl;
	}


	std::cout << std::endl;
	Form b("f1", 100, 15);
	Bureaucrat b2("Giorno", 101);
	b2.signForm(b);
	std::cout << std::endl << b << std::endl;

	std::cout << std::endl;
	Form c("f1", 100, 15); 
	Bureaucrat c2("Josuke", 100);
	c2.signForm(c);
	c2.signForm(c); 
	std::cout << std::endl << c << std::endl;

	return (0);
}
