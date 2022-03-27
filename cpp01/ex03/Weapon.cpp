#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon()
{}

const std::string&  Weapon::getType() const
{
    const std::string& weapon_ref = this->_type;
    return(weapon_ref);
}

void    Weapon::setType(std::string new_weapon)
{
    this->_type = new_weapon;
}