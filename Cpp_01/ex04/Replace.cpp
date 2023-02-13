/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:18:56 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 17:18:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace()
{

}

Replace::~Replace()
{

}

std::string Replace::my_replace(std::string line, std::string str1, std::string str2)
{
	std::string result;
	std::string::size_type next = 0;
	size_t prev;
	while(1)
	{
		prev = next;
		next = line.find(str1, prev);
		result.append(line.substr(prev, next - prev));
		if (next == std::string::npos)
			return result;
		result.append(str2);
		next += str1.length();
	}
	return result;
}