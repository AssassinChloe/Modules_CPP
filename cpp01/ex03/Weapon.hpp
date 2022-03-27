#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon
{
    public :

    Weapon(std::string type);
    ~Weapon();
    const std::string&  getType() const;
    void                setType(std::string new_weapon);

    private :

    std::string _type;
};

#endif