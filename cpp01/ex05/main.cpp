#include "Harl.hpp"

int main (int ac, char **av)
{
    Harl harl;
    if (ac != 2)
    {
        std::cout << "Usage './harl level_of_complaint'" << std::endl;
        std::cout << "Levels are : DEBUG, INFO, WARNING or ERROR" << std::endl;
        std::cout << " - or try 'test' to test them all" << std::endl;
        return (1);
    }
    if ((std::string)av[1] == "test")
    {
        harl.complain("DEBUG");
        harl.complain("INFO");
        harl.complain("WARNING");
        harl.complain("ERROR");
    }
    else
        harl.complain(av[1]);
    return (0);
}