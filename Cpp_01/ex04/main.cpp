/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:18:50 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 18:13:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Replace.hpp"
#include<fstream>


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}

	std::ifstream in(argv[1]);
	if (!in.is_open())
	{
		std::cout << "File not found" << std::endl;
		return 1;
	}

	std::string line;
	std::getline(in, line, '\0');
	in.close();

	Replace place;				
	std::string line_replace;
	line_replace = place.my_replace(line, argv[2], argv[3]);
	std::string fileout = std::string(argv[1]) + "." + "replace";

	std::ofstream out; 				
	out.open(fileout);				
	out << line_replace;
	out.close();
	return 0;
}