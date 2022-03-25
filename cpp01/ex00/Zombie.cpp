#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name) : _name(name)
{}

void Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << ": Braiiiiinzaaarg... *crippling silence*" << std::endl;
}