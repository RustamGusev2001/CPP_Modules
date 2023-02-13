/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:15:23 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 19:57:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat appears" << std::endl;
	_type = "type WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat obliterated" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	this->_type = copy._type;
}

WrongCat &WrongCat::operator=(WrongCat const &copy)
{
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void WrongCat::makeSound(void)
{
	std::cout << "WrongCat: Miaw" << std::endl;
}
