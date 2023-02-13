/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:12:27 by marvin            #+#    #+#             */
/*   Updated: 2022/11/14 17:12:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main()
{
	{
		int array[] = {1, 2, 3, 4, 5};

		int size = sizeof(array) / sizeof(array[0]);
		iter(array, size, print);

		std::string arr[] = {"a", "b", "c"};

		std::cout << std::endl;
		int lenght = sizeof(arr) / sizeof(arr[0]);
		iter(arr, lenght, print);

		float ar[] = {1.09, 2.23, 3.56, 5.34};

		std::cout << std::endl;
		int number = sizeof(ar) / sizeof(ar[0]);
		iter(ar, number, print);
	}

    return (0);
}

