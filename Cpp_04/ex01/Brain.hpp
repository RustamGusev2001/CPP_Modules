/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:15:56 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 19:36:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	protected:
		int			_num_ideas;
		std::string _ideas[100];

	public:
		Brain();
		virtual ~Brain();
		Brain(Brain const &copy);
		Brain &operator=(Brain const &copy);

		void addIdea(std::string idea);
		void forgetIdea(void);
		void printIdeas();
};

#endif
