/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:57:01 by marvin            #+#    #+#             */
/*   Updated: 2022/11/14 20:57:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_PISCINE_SPAN_HPP
#define CPP_PISCINE_SPAN_HPP

#include <iostream>
#include <vector>
#include <ctime>
#include <exception>
#include <cstdlib>
#include <algorithm>

class Span {
private:
    unsigned int        N;
    std::vector<int>    data;
    Span();
public:
    Span(unsigned int n);
    ~Span();
    Span(const Span & copy);
    Span & operator= (const Span & copy);

    int & operator[] (unsigned int index);

    std::vector<int> & getData( void );

    void addNumber(unsigned int num);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    class	SpanException : public std::exception {
    private:
        std::string _msg;
    public:
        SpanException(std::string msg): _msg(msg){};
        virtual ~SpanException() throw (){};
        virtual const char* what() const throw(){ return (_msg.c_str());};
    };
};


#endif
