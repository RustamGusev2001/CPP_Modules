/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:15:47 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 19:56:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;


	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &copy);
		virtual Animal &operator=(Animal const &copy);

		virtual void makeSound();
		std::string getType();
		void addIdea(std::string idea);
		void forgetIdea(void);
		void printIdeas();
		Brain		*_brain;
};

#endif
