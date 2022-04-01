#include "main.h"

int main()
{
    std::cout << "with virtual fonction makeSound()" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete(i);
    delete(j);
    delete(meta);

    std::cout << "without virtual fonction makeSound()" << std::endl;

    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongAnimal* wrongi = new WrongCat();
    std::cout << wrongi->getType() << " " << std::endl;
    wrongi->makeSound();
    wrongmeta->makeSound();
    delete(wrongmeta);
    delete(wrongi);
    return (0);
}