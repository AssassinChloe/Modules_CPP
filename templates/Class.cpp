
#include "{{CLASS}}.hpp"

{{CLASS}}::{{CLASS}}()
{}

{{CLASS}}::{{CLASS}}({{CLASS}} const & src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

{{CLASS}}& {{CLASS}}::operator=({{CLASS}} const & var)
{
    if (this != &var)
    {
        /*modifier les variables*/
        this-> ;
    }
    return *this;
}

{{CLASS}}::~{{CLASS}}()
{}

std::ostream & operator<<(std::ostream & ostream, {{CLASS}} const & instance)
{
    ostream << ;
    return (ostream);
}
