#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
    public :

    HumanB(std::string name);
    ~HumanB();

    void    setWeapon(Weapon& new_weapon);
    void    attack();
    
    private :

    std::string _name;
    Weapon* _weapon;
};

#endif