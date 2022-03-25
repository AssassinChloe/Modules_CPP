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

    void announce(void) const;
    Zombie* zombieHorde(int N, std::string name);
    
    private :

    std::string _name;
};

#endif
