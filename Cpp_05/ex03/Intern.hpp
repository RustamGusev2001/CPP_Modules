/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:36:01 by marvin            #+#    #+#             */
/*   Updated: 2022/11/11 13:36:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	std::string 	arrForm[3];
	Form *(Intern::*func[3])(std::string target);

	Form * newShrubbery(std::string target);
	Form * newRobotomy(std::string target);
	Form * newPresidential(std::string target);

public:
	Intern();
	~Intern();

	Form * makeForm(std::string name, std::string target);
};


#endif //CPP_INTERN_HPP
