/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:29 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:32 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main()
{
    int nb(4);
    int i;

    std::cout << std::endl << "Testing Cat and Dog" << std::endl << std::endl;

    std::cout << "Creation of 4 AAnimals : even index = dog, odd index = cat " << std::endl;
    const AAnimal* tab[nb];
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
/* A decommenter pour voir l'erreur de compilation a cause de la classe abstraite de AAnimal*/
/* del here
    AAnimal test;
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