/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 21:04:48 by marvin            #+#    #+#             */
/*   Updated: 2022/11/12 21:04:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("shrubbery form", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) : Form(copy), _target(copy._target)
{
	(*this) = copy;
}
ShrubberyCreationForm &  ShrubberyCreationForm::operator= (const ShrubberyCreationForm & copy)
{
	if (this == &copy)
		return (*this);
	Form::operator=(copy);
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream	fout;
	std::string 	filename;
	std::string 	buf;

	if (executor.getGrade() <= this->getGradeExec() && this->getSign() == true)
	{
		buf =  "          .     .  .      +     .      .          .\n"
                "     .       .      .     #       .           .\n"
                "        .      .         ###            .      .      .\n"
                "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
                "          .      . \"####\"###\"####\"  .\n"
                "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
                "  .             \"#########\"#########\"        .        .\n"
                "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
                "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
                "                .\"##\"#####\"#####\"##\"           .      .\n"
                "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
                "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
                "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
                "            .     \"      000      \"    .     .\n"
                "       .         .   .   000     .        .       .\n"
                ".. .. ..................O000O........................ ......";
		filename = this->_target + "_shrubbery";
		fout.open(filename.c_str());
		fout << buf;
		fout.close();
	}
	else if (!(this->getSign()))
		throw ("The Form not signed!");
	else
		throw Bureaucrat::GradeTooLowException();
}