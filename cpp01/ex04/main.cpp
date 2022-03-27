#include "main.h"

int ft_error(std::string str)
{
    std::cout << "Error : " << str << std::endl;
    return (1);
}

int main(int ac, char**av)
{
    if (ac != 4)
        return(ft_error("Wrong number of arguments"));
    std::string ifname = av[1];
    std::string tofind = av[2];
    std::string toput = av[3];
    if (ifname.size() == 0 || tofind.size() == 0 || toput.size() == 0)
        return (ft_error("Argument can't be empty"));
    std::string ofname = ifname + ".replace";
    SedLike replace(ifname, ofname, tofind, toput);
    if (replace.replace() == 1)
        return (ft_error("Can't open the file"));
    return (0);
}