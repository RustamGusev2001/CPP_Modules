/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:10:55 by marvin            #+#    #+#             */
/*   Updated: 2022/11/14 17:10:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y)
{
    T z = x;
    x = y;
    y = z;
}

template <typename T>
const T &min(const T &x, const T &y)
{
    if (x < y)
        return (x);
    else
        return (y);
}

template <typename T>
const T &max(const T &x, const T &y)
{
    if (x > y)
        return (x);
    else
        return (y);
}
#endif
