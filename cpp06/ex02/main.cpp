/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:08:58 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/19 12:13:54 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Base * generate(void)
{
    srand(time(NULL));
    int nb = rand() % 3;
    if (nb == 0)
        return (new A);
    else if (nb == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base* p)
{
    A *base_a = dynamic_cast<A *>(p);
    if (base_a)
    {
        std::cout << "A" << std::endl;
        return ;
    }
    B *base_b = dynamic_cast<B *>(p);
    if (base_b)
    {
        std::cout << "B" << std::endl;
        return ;
    }
    C *base_c = dynamic_cast<C *>(p);
    if (base_c)
    {
        std::cout << "C" << std::endl;
        return ;
    }
}

void identify(Base& p)
{
    try
    {
        A &base_a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)base_a;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
    
    try
    {
        B &base_b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)base_b;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }

    try
    {
        C &base_c = dynamic_cast<C&>(p);
        (void)base_c;
        std::cout << "C" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
}

int main()
{
    Base *base;
    
    std::cout << "Generate base " << std::endl;
    base = generate();
    std::cout << "Identification by ptr : ";
    identify(base);
    std::cout << "Identification by ref : ";
    identify(*base);
    delete(base);
    std::cout << std::endl;

    return (0);
}