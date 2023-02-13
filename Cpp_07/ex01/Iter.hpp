/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:12:23 by marvin            #+#    #+#             */
/*   Updated: 2022/11/14 17:12:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, int size, void (*f)(const T &x))
{
    for (int i = 0; i < size; i++)
        (*f)(arr[i]);
}

template <typename T>
void print(const T &x)
{
    std::cout << x << std::endl;
}

#endif
