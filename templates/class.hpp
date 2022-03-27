#ifndef {{MACRO_GUARD}}
#define {{MACRO_GUARD}}

# include <iostream>
class {{CLASS}}
{
    public:
        {{CLASS}}();
        {{CLASS}}();
        virtual ~{{CLASS}}();

        {{CLASS}}& operator=({{CLASS}} const & rhs);
    private:
        
};

std::ofstream & operator<<(std::ofstream & o, {{CLASS}} const & i);

#endif