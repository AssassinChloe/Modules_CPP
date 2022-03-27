#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>

# define DEBUG      0
# define INFO       1
# define WARNING    2
# define ERROR      3


class Harl
{
    public :
        Harl();
        ~Harl();
        void set_filter(std::string lvl_min);
        void complain( std::string level);

    private :

    int _level;
    int _lvl_min;

    int     set_level(std::string level);
    void    debug( void ) const;
    void    info( void ) const;
    void    warning( void ) const;
    void    error( void ) const;
    void    bad_filter_message(void) const;
};

#endif