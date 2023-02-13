/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:24:58 by marvin            #+#    #+#             */
/*   Updated: 2022/11/13 15:24:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error count parametrs" << std::endl;
        return (1);
    }

    std::string str(argv[1]);
    Convert a(str);
    a.converted();

    std::cout << std::endl;
    Convert b(a);
    b.converted();

    return (0);
}