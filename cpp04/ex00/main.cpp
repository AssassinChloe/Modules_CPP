/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:47:56 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/13 14:06:36 by cassassi         ###   ########.fr       */
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
    const WrongCat* wrongtruecat = new WrongCat();

    std::cout << "And "<< wrongcat->getType() << " init as a WrongAnimal says :" << std::endl;
    wrongcat->makeSound();

    std::cout << "And Wronganimal says :" << std::endl;
    wronganimal->makeSound();

        std::cout << "And "<< wrongtruecat->getType() << " init as a WrongCat says :" << std::endl;
    wrongtruecat->makeSound();
    
    delete(wronganimal);
    delete(wrongcat);
    delete(wrongtruecat);
    return (0);
}