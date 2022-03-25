#include "Zombie.hpp"

int main()
{
    Zombie *paul;   
    std::cout << std::endl << "Creating a Zombie" << std::endl;
    Zombie mary = Zombie("Mary");
    mary.announce();

    std::cout << std::endl << "Creating a newZombie" << std::endl;
    paul = mary.newZombie("Paul");
    mary.announce();
    (*paul).announce();

    std::cout << std::endl << "Creating a randomChump" << std::endl;
    mary.randomChump("Vlad");
    mary.announce();
    (*paul).announce();

    delete(paul);
    return (0);
}