/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:47:56 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/08 10:47:56 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main()
{
    std::cout << std::endl << "Testing with virtual fonction makeSound()" << std::endl << std::endl;
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " says :" << std::endl;
    dog->makeSound();

    std::cout << "And "<< cat->getType() << " says :" << std::endl;
    cat->makeSound();

    std::cout << "And "<< animal->getType() << " (Animal) says :" << std::endl;
    animal->makeSound();
    delete(cat);
    delete(dog);
    delete(animal);

    std::cout << std::endl << "Testing without virtual fonction makeSound()" << std::endl << std::endl;
    const WrongAnimal* wronganimal = new WrongAnimal();
    const WrongAnimal* wrongcat = new WrongCat();

    std::cout << "And "<< wrongcat->getType() << " says :" << std::endl;
    wrongcat->makeSound();

    std::cout << "And Wronganimal says :" << std::endl;
    wronganimal->makeSound();
    
    delete(wronganimal);
    delete(wrongcat);
    return (0);
}