/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:25:08 by marvin            #+#    #+#             */
/*   Updated: 2022/11/13 15:25:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
public:
   virtual ~Base(){};
};

class A: public Base
{};

class B: public Base
{};

class C: public Base
{};

Base * generate(void)
{
    srand(std::time(NULL));
    int random_var = rand();

    if (random_var % 3 == 0)
        return (new A);
    if (random_var % 3 == 1)
        return (new B);
    return (new C);
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "this is class A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "this is class B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "this is class C" << std::endl;
    else
        std::cout << "Something went wrong" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A a = dynamic_cast<A &>(p);
        std::cout << "this is class A" << std::endl;
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        B b = dynamic_cast<B &>(p);
        std::cout << "this is class B" << std::endl;
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        C c = dynamic_cast<C &>(p);
        std::cout << "this is class C" << std::endl;
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }
}

int main()
{
    Base * a;

    std::cout << "pointer *p:" << std::endl;

    a = generate();
    identify(a);
    delete a;

    std::cout << "reference &p:" << std::endl;

    Base &b = *(generate());
    identify(b);
    delete &b;

    return (0);
}