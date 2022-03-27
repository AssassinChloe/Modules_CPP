#ifndef SEDLIKE_H
# define SEDLIKE_H

# include <string>
# include <fstream>

class SedLike
{
    public :

        SedLike(std::string ifname, std::string ofname, std::string tofind, std::string toput);
        ~SedLike();

        int replace();

    private : 

    std::string     _ifname;
    std::string     _ofname;
    std::string     _tofind;
    std::string     _toput;
};

#endif