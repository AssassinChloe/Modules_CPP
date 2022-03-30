#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap robot1("Oscar");
    ScavTrap robot2("Jarvis");

    while (robot1.getenergy() > 0 && robot2.getenergy() > 0
        && robot1.gethitpoint() > 0 && robot2.gethitpoint() > 0)
    {
        robot2.guardGate();
        std::cout << std::endl << robot2.getname() <<": \"YOU SHALL NO PASS !\"" << std::endl;
        std::cout << robot1.getname() <<": \"Biipboupbi bouup bip!\"" << std::endl << std::endl;

        robot1.attack(robot2.getname());
        robot2.takeDamage(robot1.getdamage());
        robot2.attack(robot1.getname());
        robot1.takeDamage(robot2.getdamage());
        std::cout << "SPROCH" << std::endl;
        std::cout << std::endl << robot1 << std::endl;
        std::cout << std::endl << robot2 << std::endl << std::endl;
    }
    return (0);
}