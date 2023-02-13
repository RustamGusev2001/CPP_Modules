/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:17:48 by marvin            #+#    #+#             */
/*   Updated: 2022/11/11 13:17:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP

#include <iostream>
#include <string>


class Bureaucrat
{
private:
	std::string const	_name;
	int 				_grade;
	Bureaucrat(){};
public:
	Bureaucrat(const std::string name, int range);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat & copy);
	Bureaucrat & operator= (const Bureaucrat & copy);

	std::string getName() const;
	int getGrade() const;

	void incGrade();
	void decGrade();

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(){};
		virtual ~GradeTooHighException()  throw(){};

		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(){};
		virtual ~GradeTooLowException()  throw(){};

		virtual const char* what() const throw();
	};
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bur);

#endif 
