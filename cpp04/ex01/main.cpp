/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:29 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/11 17:01:50 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main()
{
    int nb(10);
    int i;

    std::cout << std::endl << "Testing Virtual Destructor" << std::endl << std::endl;

    std::cout << "Creation of 10 animals : even index = dog, odd index = cat " << std::endl;
    const Animal* tab[nb];
    for(i = 0; i < nb; i++)
    {
        if (i % 2 == 0)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }
    std::cout << "Then makeSound and delete" << std::endl;
    for (i = 0; i < nb; i++)
    {
        tab[i]->makeSound();
        delete(tab[i]);
    }
/* ************************************************************************** */
/* A decommenter et utiliser avec Valgring pour voir l'erreur*/
/* del here
    std::cout << std::endl << "Testing without Virtual Destructor" << std::endl << std::endl;
    const WrongAnimal* test;
    test = new WrongCat();
    delete(test);
    std::cout << "Destructor wrong cat and destructor brain are not used because the computer sees the wrongcat as a wronganimal only" << std::endl;
and here */  
/* ************************************************************************** */
    
    std::cout << std::endl << "Testing Deep Copy" << std::endl << std::endl;
    std::cout << "Initiation of Basic" << std::endl;
    Dog basic;
    std::cout << "Here we fill Basic brain with 100 'wouf' ideas" << std::endl;
    for (i = 0; i < 100; i++)
        basic.fillBrain("wouf", i);
    {
        std::cout << "Deep copy of Basic Dog into Tmp, initiating Tmp" << std::endl;
        Dog tmp = basic;
        
        basic.makeSound();
        std::cout << "42th tought of Basic : "<< basic.getTought(42) << std::endl;
        
        tmp.makeSound();
        std::cout << "42th tought of Tmp : "<< tmp.getTought(42) << std::endl << " It worked, its aliiiive mouhahahaaaarg..." << std::endl;
    }
    std::cout << "42th tought of Basic : "<< basic.getTought(42) << std::endl;
    std::cout << "I still have brain ! " << std::endl;
    basic.makeSound();
    return (0);
}