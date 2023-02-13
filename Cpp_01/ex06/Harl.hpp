/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:19:39 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 18:23:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>


class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	std::string lvl_arr[4];
	void (Harl::* funcs[5]) (void);

public:
	Harl();
	~Harl();
	void complain( std::string level );
};

#endif