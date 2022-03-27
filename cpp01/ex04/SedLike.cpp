#include "SedLike.hpp"
#include <iostream>

SedLike::SedLike(std::string ifname, std::string ofname, std::string tofind, std::string toput) :
_ifname(ifname), _ofname(ofname), _tofind(tofind), _toput(toput)
{}

SedLike::~SedLike()
{}

int SedLike::replace()
{
    std::ifstream   ifs(this->_ifname);
    std::string     buff;
    size_t          pos;
    if (!ifs)
        return (1);
    std::ofstream   ofs(this->_ofname);
    std::getline(ifs, buff);
    if (ifs.eof() && buff == "")
    {
        ifs.close();
        ofs.close();
        return(0);
    }
    while (!ifs.eof())
    {   
        pos = buff.find(this->_tofind);
        while (pos >= 0 && pos < buff.size())
        {
            buff.erase(pos, this->_tofind.size());
            buff.insert(pos, this->_toput);
            pos = buff.find(this->_tofind);
        }
        ofs << buff;
        std::getline(ifs, buff);
        if (!ifs.eof())
            ofs << std::endl;
    }
    if (buff == "")
        ofs << std::endl;
    else
    {
        pos = buff.find(this->_tofind);
        while (pos >= 0 && pos <= buff.size())
        {
            buff.erase(pos, this->_tofind.size());
            buff.insert(pos, this->_toput);
            pos = buff.find(this->_tofind);
        }
        ofs << buff;
    }
    return (0);
}