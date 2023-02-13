/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 21:27:31 by marvin            #+#    #+#             */
/*   Updated: 2022/11/12 21:27:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("robotomy form", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy) : Form(copy), _target(copy._target)
{
	(*this) = copy;
}

RobotomyRequestForm &  RobotomyRequestForm::operator= (const RobotomyRequestForm & copy)
{
	if (this == &copy)
		return (*this);
	Form::operator=(copy);
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	srand(time(NULL));
	if (executor.getGrade() <= this->getGradeExec() && this->getSign() == true && rand() % 2 == 0)
	{
		std::cout << "....Bzzzz.....Phhzzzz.....Bbrrzzzz...." << std::endl;
		std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
	}
	else if (!(this->getSign()))
		throw ("The Form not signed!");
	else
		throw Bureaucrat::GradeTooLowException();
}
