/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:56:42 by marvin            #+#    #+#             */
/*   Updated: 2022/11/14 20:56:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main()
{
	int to_find = 3;
	int not_find = 100;
	int neg_find = -15;

	std::vector<int> cont;
	for (int i = 0; i < 5; i++)
	{
		cont.push_back(i);
		std::cout << i << " ";
	}
	std::cout << std::endl;

	std::cout << "Find int(vector) " << to_find << " : " << easyfind(cont, to_find) << std::endl;
	std::cout << "Find int(vector) " << not_find << " : " << easyfind(cont, not_find) << std::endl;
	std::cout << "Find int(vector) " << neg_find << " : " << easyfind(cont, neg_find) << std::endl;

	std::list<int> ls;
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		ls.push_back(i);
		std::cout << i << " ";
	}
	std::cout << std::endl;

	std::cout << "Find int(list) " << to_find << " : " << easyfind(ls, to_find) << std::endl;
	std::cout << "Find int(list) " << not_find << " : " << easyfind(ls, not_find) << std::endl;
	std::cout << "Find int(list) " << neg_find << " : " << easyfind(ls, neg_find) << std::endl;

	// array<int, 5> arr;
	// std::cout << "---------------ARRAY------------" << std::endl;
	// for (int i = 0; i < 5; i++)
	// {
	// 	arr[i] = i;
	// 	std::cout << i << " ";
	// }
	// std::cout << std::endl;

	// std::cout << "Find int(array) " << to_find << " : " << easyfind(arr, to_find) << std::endl;
	// std::cout << "Find int(array) " << not_find << " : " << easyfind(arr, not_find) << std::endl;
	// std::cout << "Find int(array) " << neg_find << " : " << easyfind(arr, neg_find) << std::endl;

	return (0);
}
