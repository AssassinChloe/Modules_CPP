
#ifndef {{MACRO}}_H
#define {{MACRO}}_H

# include <iostream>
class {{CLASS}}
{
    public:
        {{CLASS}}();
        {{CLASS}}({{CLASS}} const & src);
        virtual ~{{CLASS}}();

        {{CLASS}}& operator=({{CLASS}} const & var);
    private:
        
};

std::ostream & operator<<(std::ostream & ostream, {{CLASS}} const & instance);

#endif
