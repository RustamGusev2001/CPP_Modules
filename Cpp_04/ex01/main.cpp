/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:16:14 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 19:58:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define ANIMAL	2

int main()
{
	Animal *animal[ANIMAL];
	std::cout << std::endl;
	for (int i = 0; i < ANIMAL; i++)
	{
		if (i < ANIMAL / 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
		std::cout << "(" << i <<  ") " << animal[i]->getType() << " ";
		animal[i]->makeSound();
		std::cout << "(" << i <<  ") " << animal[i] << std::endl;
	}

	std::cout << std::endl;
	animal[0]->addIdea("Sleep");
	animal[0]->addIdea("Eat");
	animal[0]->addIdea("WC");
	animal[0]->printIdeas();
	std::cout << std::endl;
	animal[0]->forgetIdea();
	animal[0]->printIdeas();

	std::cout << std::endl;
	std::cout << animal[0]->getType() << " " << animal[0]  << std::endl;
	std::cout << animal[1]->getType() << " " << animal[1]  << std::endl;
	*(animal[1]) = *(animal[0]);
	std::cout << animal[0]->getType() << " " << animal[0]  << std::endl;
	std::cout << animal[1]->getType() << " " << animal[1]  << std::endl;
	animal[1]->printIdeas();

	std::cout << std::endl;
	for (int i = 0; i < ANIMAL; i++)
	{
		std::cout << "(" << i <<  ") " << animal[i]->getType() << std::endl;
		delete animal[i];
	}

	std::cout << std::endl;
	Cat cat = Cat();
	cat.addIdea("Sleep");
	cat.addIdea("Eat");
	cat.printIdeas();
	Cat cat2(cat);
	cat2.printIdeas();
		
	std::cout << std::endl;

	return 0;
}

