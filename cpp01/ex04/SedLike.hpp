#ifndef SEDLIKE_H
# define SEDLIKE_H

# include <string>
# include <fstream>

class SedLike
{
    public :

        SedLike(std::ifstream* ifs, std::ofstream* ofs, std::string tofind);
        ~SedLike();

        void    set_tofind(std::string tofind);
        void    set_toput(std::string toput);
        void     replace();

    private : 

    std::string         _tofind;
    std::string         _toput;
    std::ifstream*       _ifs;
    std::ofstream*       _ofs;

    void    find_and_replace(std::string& buff);
};

#endif