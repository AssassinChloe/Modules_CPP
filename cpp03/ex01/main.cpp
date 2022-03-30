#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap robot1("Oscar");
    ScavTrap robot2("Jarvis");
    int i(0);
    std::string tab[] = 
    {
        "YOU SHALL NOT PASS!",
        "Don"
    };

    robot2.guardGate();
    while (robot1.gethitpoint() > 0 && robot2.gethitpoint() > 0)
    {
        std::cout << std::endl << robot2.getname() <<": \"YOU SHALL NOT PASS !\"" << std::endl;
        std::cout << robot1.getname() <<": \"Biipboupbi bouup bip!\"" << std::endl << std::endl;

        if (robot1.getenergy() > 0)
        {
            robot1.attack(robot2.getname());
            robot2.takeDamage(robot1.getdamage());
            std::cout << std::endl;
        }
        if (robot2.getenergy() > 0)
        {
            robot2.attack(robot1.getname());
            robot1.takeDamage(robot2.getdamage());
            std::cout << std::endl;
        }
        if (robot1.getenergy() > 0)
            robot1.beRepaired(7);
        std::cout << std::endl << robot1 << std::endl;
        std::cout << std::endl << robot2 << std::endl << std::endl;
    }
        std::cout << "SPROCH" << std::endl << std::endl;
    return (0);
}