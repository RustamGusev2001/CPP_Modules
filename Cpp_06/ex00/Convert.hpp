/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:24:54 by marvin            #+#    #+#             */
/*   Updated: 2022/11/13 15:24:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_PISCINE_CONVERT_HPP
#define CPP_PISCINE_CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
class Convert
{
private:
    int         _dot;
    int         _count;
    int         _fl;
    std::string _arg;
    Convert();
    int isAlNum(std::string arg);

public:
    Convert(std::string arg);
    ~Convert();
    Convert(const Convert & copy);
    Convert & operator= (const Convert & right);

    void converted();
};


#endif //CPP_PISCINE_CONVERT_HPP
