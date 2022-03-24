#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
    public :

    Zombie();
    Zombie(std::string name);
    ~Zombie();

    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
    void announce(void) const;

    private :

    std::string _name;
};

#endif
