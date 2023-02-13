/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:56:52 by marvin            #+#    #+#             */
/*   Updated: 2022/11/14 20:56:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    try
    {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
//        sp.addNumber(12); // 6e
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        for (int i = 0; i < 5; ++i)
            std::cout << sp[i] << std::endl;
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }

    std::cout <<std::endl;
    std::cout << "Short Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Long Span: " << sp.longestSpan() << std::endl;

    Span sp2 = Span(10000);

    sp2.addNumber(sp.getData().begin(), sp.getData().end());

    std::cout << "Short Span: " << sp2.shortestSpan() << std::endl;
    std::cout << "Long Span: " << sp2.longestSpan() << std::endl;

    Span sp3 = Span(1); 
    try {
        std::cout << "Short Span: " << sp3.shortestSpan() << std::endl;
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }

    return (0);
}
