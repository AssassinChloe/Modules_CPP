#include "Harl.hpp"

int main (int ac, char **av)
{
    Harl harl;
    if (ac != 2)
    {
        std::cout << "Usage './harlFilter level_of_complaint_minimal'" << std::endl;
        std::cout << "Levels are : DEBUG, INFO, WARNING or ERROR" << std::endl;
        return (1);
    }
    harl.set_filter(av[1]);
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    return (0);
}