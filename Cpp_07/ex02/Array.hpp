/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:12:53 by marvin            #+#    #+#             */
/*   Updated: 2022/11/14 17:12:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
    public:
        Array() : arr(NULL), n(0), siz(0) {};

        Array(unsigned int n) : siz(n)
        {
			if (siz < 0)
				throw (IndexOutOfBounds());
            this->n = n;
            if (n == 0)
                arr = NULL;
            else
                arr = new T[n];
        };

        Array(const Array &x)
        {
            this->arr = new T[x.n];
            n = x.n;
			siz = x.siz;
            for (unsigned int i = 0; i < n; i++)
                arr[i] = x.arr[i];
        };

        Array &operator=(const Array &x)
        {
            if (this == &x)
                return (*this);
            if (arr)
				delete[] arr;
            n = x.n;
			siz = x.siz;
			this->arr = new T[n];
			for (unsigned int i = 0; i < n; i++)
				arr[i] = x.arr[i];
            return (*this);
        };

        ~Array()
        {
            if (arr)
                delete [] arr;
        };

        int size()
        {
            return (n);
        }

        class IndexOutOfBounds : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Index out of bounds!");
                }
        };

        T &operator[](unsigned int idx)
        {
                if (idx >= n || idx < 0 || arr == NULL)
                    throw (IndexOutOfBounds());
                return (arr[idx]);
        }

        const T &operator[](unsigned int idx) const
        {
                if (idx >= n || idx < 0 || arr == NULL)
                    throw (IndexOutOfBounds());
                return (arr[idx]);
        }

    private:
        T *arr;
        unsigned int n;
		int siz;
};

#endif
