/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:56:49 by marvin            #+#    #+#             */
/*   Updated: 2022/11/14 20:56:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>

bool easyfind(T &cont, int to_find)
{
	typename T::iterator i;

	i = std::find(cont.begin(), cont.end(), to_find);
	if (i == cont.end())
		return (false);
	else
		return (true);
}

#endif
