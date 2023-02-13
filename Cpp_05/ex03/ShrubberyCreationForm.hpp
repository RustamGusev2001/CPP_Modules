/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 21:16:29 by marvin            #+#    #+#             */
/*   Updated: 2022/11/12 21:16:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_SHRUBBERYCREATIONFORM_HPP
#define CPP_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm(){};
	ShrubberyCreationForm(const ShrubberyCreationForm & copy);
	ShrubberyCreationForm & operator= (const ShrubberyCreationForm & copy);

	void execute(Bureaucrat const & executor) const;
};


#endif
