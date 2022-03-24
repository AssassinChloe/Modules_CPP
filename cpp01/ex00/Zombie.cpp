#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name) : _name(name)
{}

Zombie::~Zombie()
{
    std::cout << "The zombie doesn't move anymore... Maybe he is really dead... Maybe not!" << std::endl;
    std::cout << this->_name << ": Braiiiiinzaaarg... *crippling silent*" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie( std::string name )
{
    
}

void Zombie::randomChump( std::string name )
{}