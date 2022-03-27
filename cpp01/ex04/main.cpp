#include "main.h"

int ft_error(std::string str)
{
    std::cout << "Error : " << str << std::endl;
    return (1);
}

int ft_check_arg(int ac, char** av)
{
    if (ac != 4)
        return(ft_error("Wrong number of arguments"));
    if ((std::string)av[1] == "")
        return (ft_error("No infile name"));
    std::string tofind(av[2]);
    if ((std::string)av[2] == "")
        return (ft_error("String to find can't be empty"));
    return (0);
}

int main(int ac, char**av)
{
    if (ft_check_arg(ac, av) == 1)
        return (1);
    std::ifstream       ifs(av[1]);
    if (!ifs)
        return(ft_error("Error open infile"));
    std::ofstream       ofs((std::string)av[1] + ".replace");
    if (!ofs)
    {
        ifs.close();
        return(ft_error("Error open outfile"));
    }
    SedLike replace(&ifs, &ofs, av[2]);
    replace.set_toput(av[3]);
    replace.replace();
    ifs.close();
    ofs.close();
    return (0);
}