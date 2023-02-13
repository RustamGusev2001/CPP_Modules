/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:09:13 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 21:09:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout<<"\n===My tests===\n";

	Fixed c(1000);
	Fixed d(500.625f);

	std::cout<<"Comparison operators: >, <, >=, <=, == and !=\n\n";

	std::cout<<"c: "<<c<<" > "<<"d: "<<d<<std::endl;
	std::cout<<(c > d)<<std::endl;

	std::cout<<"d: "<<d<<" > "<<"c: "<<c<<std::endl;
	std::cout<<(d > c)<<std::endl;

	std::cout<<"c: "<<c<<" < "<<"d: "<<d<<std::endl;
	std::cout<<(c < d)<<std::endl;

	std::cout<<"d: "<<d<<" < "<<"c: "<<c<<std::endl;
	std::cout<<(d < c)<<std::endl;

	std::cout<<std::endl;
	c = Fixed(500.625f);
	std::cout<<"C now = "<<c<<std::endl;
	std::cout<<std::endl;

	std::cout<<"c: "<<c<<" <= "<<"d: "<<d<<std::endl;
	std::cout<<(c <= d)<<std::endl;

	std::cout<<"d: "<<d<<" <= "<<"c: "<<c<<std::endl;
	std::cout<<(d <= c)<<std::endl;

	std::cout<<"c: "<<c<<" >= "<<"d: "<<d<<std::endl;
	std::cout<<(c >= d)<<std::endl;

	std::cout<<"d: "<<d<<" >= "<<"c: "<<c<<std::endl;
	std::cout<<(d >= c)<<std::endl;

	std::cout<<"c: "<<c<<" == "<<"d: "<<d<<std::endl;
	std::cout<<(c == d)<<std::endl;

	std::cout<<"d: "<<d<<" != "<<"c: "<<c<<std::endl;
	std::cout<<(d != c)<<std::endl;

	std::cout<<std::endl;
	c = Fixed(4);
	std::cout<<"C now = "<<c<<std::endl;
	std::cout<<std::endl;

	std::cout<<"c: "<<c<<" == "<<"d: "<<d<<std::endl;
	std::cout<<(c == d)<<std::endl;

	std::cout<<"d: "<<d<<" != "<<"c: "<<c<<std::endl;
	std::cout<<(d != c)<<std::endl;

	std::cout<<std::endl;
	std::cout<<"The 4 arithmetic operators: +, -, *, and /\n\n";

	std::cout<<"d: "<<d<<" + "<<"c: "<<c<<std::endl;
	std::cout<<(d + c)<<std::endl;

	std::cout<<"d: "<<d<<" - "<<"c: "<<c<<std::endl;
	std::cout<<(d - c)<<std::endl;

	std::cout<<"d: "<<d<<" * "<<"c: "<<c<<std::endl;
	std::cout<<(d * c)<<std::endl;

	std::cout<<"d: "<<d<<" / "<<"c: "<<c<<std::endl;
	std::cout<<(d / c)<<std::endl;

	std::cout<<"\nThe 4 increment/decrement\n\n";

	std::cout<<"++d = "<<++d<<" "<<"++c= "<<++c<<std::endl;
	std::cout<<"--d = "<<--d<<" "<<"--c= "<<--c<<std::endl;

	std::cout<<"d++ = "<<d++<<" "<<"d = "<<d<<std::endl;
	std::cout<<"c-- = "<<c--<<" "<<"c = "<<c<<std::endl;

	std::cout<<"\nMin max const min const max\n\n";
	std::cout<<"max ("<<d<<", "<< c<<") = "<<Fixed::max( d, c )<<std::endl;
	std::cout<<"min ("<<d<<", "<< c<<") = "<<Fixed::min( d, c )<<std::endl;

	const Fixed e(555.5f);
	const Fixed f(555.625f);

	std::cout<<"const max ("<<e<<", "<< f<<") = "<<Fixed::max( e, f )<<std::endl;
	std::cout<<"const min ("<<e<<", "<< f<<") = "<<Fixed::min( e, f )<<std::endl;


	std::cout<<"\n===The end===\n";
	return (0);
}