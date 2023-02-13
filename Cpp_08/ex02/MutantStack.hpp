/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:57:09 by marvin            #+#    #+#             */
/*   Updated: 2022/11/14 20:57:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	protected:
		Container cont;

	public:
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator c_iterator;

		MutantStack() {}

		MutantStack( const MutantStack& src) : std::stack<T>(src) {
			this->cont = src.cont;
		}

		MutantStack &operator=(const MutantStack &x)
		{
			if (this == &x)
				return (*this);
			this->cont = x.cont;
			return (*this);
		}

		~MutantStack() {}

		iterator begin()
		{
			return (cont.begin());
		}

		iterator end()
		{
			return (cont.end());
		}

		void push(T p)
		{
			cont.push_back(p);
		}

		void pop()
		{
			cont.pop_back();
		}

		T &top()
		{
			return (cont.back());
		}

		bool empty()
		{
			return (cont.empty());
		}

		size_t size()
		{
			return (cont.size());
		}

};

#endif
