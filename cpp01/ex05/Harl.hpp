#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>

class Harl
{
    public :
        Harl();
        ~Harl();
        void complain( std::string level) const;

    private :

    std::string _level;

    void debug( void ) const;
    void info( void ) const;
    void warning( void ) const;
    void error( void ) const;
};

#endif